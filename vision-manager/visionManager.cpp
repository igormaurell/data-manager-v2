#include "visionManager.h"

/*Constructor*/
VisionManager::VisionManager(Ball* _ball, vector<EnemyRobot*> _enemies, vector<TeamRobot*> _allies)
{
    ball = _ball;
    enemies = _enemies;
    allies = _allies;

    resetVisionData();
}

bool VisionManager::allFieldRead()
{
    vector<bool>::iterator it;
    for(it = read_cameras.begin();it!=read_cameras.end();it++){
        if(*it==false){
            return false;
        }
    }
    return true;
}

void VisionManager::readVisionData(const SSL_DetectionFrame &cam_frame)
{
    /*Camera*/
    int cam_id = cam_frame.camera_id();
    if(cam_id<NUM_CAMERAS){
        cout<<"Lendo a camera: "<<cam_id<<endl;
        read_cameras[cam_id] = true;
    }
    else return;

    /*Ball*/
    SSL_DetectionBall aux_ball;
    int num_balls;
    num_balls = cam_frame.balls_size();
    int i;
    for(i = 0;i<num_balls;i++){
        aux_ball = cam_frame.balls(i);
        if(aux_ball.confidence()>ball_v.confidence){
            ball_v.x = aux_ball.x();
            ball_v.y = aux_ball.y();
            ball_v.z = aux_ball.z();
            ball_v.confidence = aux_ball.confidence();
            ball_v.found = true;
        }
    }

    /*Robots*/
    SSL_DetectionRobot aux_robot;
    int num_robots;
    num_robots = cam_frame.robots_blue_size();
    for(i = 0;i<num_robots;i++){
        aux_robot = cam_frame.robots_blue(i);
        if(aux_robot.confidence()>blue_v[aux_robot.robot_id()].confidence){
            blue_v[aux_robot.robot_id()].x = aux_robot.x();
            blue_v[aux_robot.robot_id()].y = aux_robot.y();
            blue_v[aux_robot.robot_id()].orientation = aux_robot.orientation();
            blue_v[aux_robot.robot_id()].confidence = aux_robot.confidence();
            blue_v[aux_robot.robot_id()].confidence = aux_robot.confidence();
            blue_v[aux_robot.robot_id()].found = true;
        }
    }

    num_robots = cam_frame.robots_yellow_size();
    for(i = 0;i<num_robots;i++){
        aux_robot = cam_frame.robots_yellow(i);
        if(aux_robot.confidence()>yellow_v[aux_robot.robot_id()].confidence){
            yellow_v[aux_robot.robot_id()].x = aux_robot.x();
            yellow_v[aux_robot.robot_id()].y = aux_robot.y();
            yellow_v[aux_robot.robot_id()].orientation = aux_robot.orientation();
            yellow_v[aux_robot.robot_id()].confidence = aux_robot.confidence();
            yellow_v[aux_robot.robot_id()].found = true;
        }
    }

    if(allFieldRead()){
        updateEntities();
        resetVisionData();
    }
}

void VisionManager::resetVisionData()
{
    read_cameras = vector<bool>(NUM_CAMERAS, false);

    blue_v = vector<visionRobot>(MAX_ID_ROBOTS, visionRobot());
    yellow_v = vector<visionRobot>(MAX_ID_ROBOTS, visionRobot());

    ball_v = visionBall();
}

void VisionManager::updateEntities()
{
    /*Ball*/
    if(ball_v.found){
        Mat ball_state;
        ball_state = (Mat_<float>(3,1)<<ball_v.x,
                                        ball_v.y,
                                        ball_v.z);

        ball->setVisionData(ball_state, ball_v.confidence);
    }
    /*Robots*/
    //TEAM_COLOR going to be picked up from the interface
    if(TEAM_COLOR==Blue){
        Mat_<float> robot_state;
        int i;
        for(i = 0;i<MAX_ID_ROBOTS;i++){
            if(blue_v[i].found){
                allies[i]++;
                robot_state = (Mat_<float>(3,1)<<blue_v[i].x,
                                                 blue_v[i].y,
                                                 blue_v[i].orientation);
                allies[i]->setVisionData(robot_state, blue_v[i].confidence);
            }
            else{
                allies[i]--;
            }
        }

        for(i = 0;i<MAX_ID_ROBOTS;i++){
            if(yellow_v[i].found){
                enemies[i]++;
                robot_state = (Mat_<float>(3,1)<<yellow_v[i].x,
                                                 yellow_v[i].y,
                                                 yellow_v[i].orientation);
                enemies[i]->setVisionData(robot_state, yellow_v[i].confidence);
            }
            else{
                enemies[i]--;
            }
        }
    }
    else{
        Mat_<float> robot_state;
        int i;
        for(i = 0;i<MAX_ID_ROBOTS;i++){
            if(yellow_v[i].found){
                allies[i]++;
                robot_state = (Mat_<float>(3,1)<<yellow_v[i].x,
                                                 yellow_v[i].y,
                                                 yellow_v[i].orientation);
                allies[i]->setVisionData(robot_state, yellow_v[i].confidence);
            }
            else{
                allies[i]--;
            }
        }

        for(i = 0;i<MAX_ID_ROBOTS;i++){
            if(blue_v[i].found){
                enemies[i]++;
                robot_state = (Mat_<float>(3,1)<<blue_v[i].x,
                                                 blue_v[i].y,
                                                 blue_v[i].orientation);
                enemies[i]->setVisionData(robot_state, blue_v[i].confidence);
            }
            else{
                enemies[i]--;
            }
        }

    }
}
