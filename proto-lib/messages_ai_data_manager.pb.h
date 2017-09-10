// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_ai_data_manager.proto

#ifndef PROTOBUF_messages_5fai_5fdata_5fmanager_2eproto__INCLUDED
#define PROTOBUF_messages_5fai_5fdata_5fmanager_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_messages_5fai_5fdata_5fmanager_2eproto();
void protobuf_AssignDesc_messages_5fai_5fdata_5fmanager_2eproto();
void protobuf_ShutdownFile_messages_5fai_5fdata_5fmanager_2eproto();

class PathPlanningPackage;
class AIRobotPackage;
class AIDataManagerPackage;

// ===================================================================

class PathPlanningPackage : public ::google::protobuf::Message {
 public:
  PathPlanningPackage();
  virtual ~PathPlanningPackage();

  PathPlanningPackage(const PathPlanningPackage& from);

  inline PathPlanningPackage& operator=(const PathPlanningPackage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PathPlanningPackage& default_instance();

  void Swap(PathPlanningPackage* other);

  // implements Message ----------------------------------------------

  PathPlanningPackage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PathPlanningPackage& from);
  void MergeFrom(const PathPlanningPackage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated float x = 1;
  inline int x_size() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline float x(int index) const;
  inline void set_x(int index, float value);
  inline void add_x(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      x() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_x();

  // repeated float y = 2;
  inline int y_size() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline float y(int index) const;
  inline void set_y(int index, float value);
  inline void add_y(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      y() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_y();

  // @@protoc_insertion_point(class_scope:PathPlanningPackage)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< float > x_;
  ::google::protobuf::RepeatedField< float > y_;
  friend void  protobuf_AddDesc_messages_5fai_5fdata_5fmanager_2eproto();
  friend void protobuf_AssignDesc_messages_5fai_5fdata_5fmanager_2eproto();
  friend void protobuf_ShutdownFile_messages_5fai_5fdata_5fmanager_2eproto();

  void InitAsDefaultInstance();
  static PathPlanningPackage* default_instance_;
};
// -------------------------------------------------------------------

class AIRobotPackage : public ::google::protobuf::Message {
 public:
  AIRobotPackage();
  virtual ~AIRobotPackage();

  AIRobotPackage(const AIRobotPackage& from);

  inline AIRobotPackage& operator=(const AIRobotPackage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AIRobotPackage& default_instance();

  void Swap(AIRobotPackage* other);

  // implements Message ----------------------------------------------

  AIRobotPackage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AIRobotPackage& from);
  void MergeFrom(const AIRobotPackage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // required string skill = 2;
  inline bool has_skill() const;
  inline void clear_skill();
  static const int kSkillFieldNumber = 2;
  inline const ::std::string& skill() const;
  inline void set_skill(const ::std::string& value);
  inline void set_skill(const char* value);
  inline void set_skill(const char* value, size_t size);
  inline ::std::string* mutable_skill();
  inline ::std::string* release_skill();
  inline void set_allocated_skill(::std::string* skill);

  // required string tactic = 3;
  inline bool has_tactic() const;
  inline void clear_tactic();
  static const int kTacticFieldNumber = 3;
  inline const ::std::string& tactic() const;
  inline void set_tactic(const ::std::string& value);
  inline void set_tactic(const char* value);
  inline void set_tactic(const char* value, size_t size);
  inline ::std::string* mutable_tactic();
  inline ::std::string* release_tactic();
  inline void set_allocated_tactic(::std::string* tactic);

  // required float target_x = 4;
  inline bool has_target_x() const;
  inline void clear_target_x();
  static const int kTargetXFieldNumber = 4;
  inline float target_x() const;
  inline void set_target_x(float value);

  // required float target_y = 5;
  inline bool has_target_y() const;
  inline void clear_target_y();
  static const int kTargetYFieldNumber = 5;
  inline float target_y() const;
  inline void set_target_y(float value);

  // required .PathPlanningPackage path_planning = 6;
  inline bool has_path_planning() const;
  inline void clear_path_planning();
  static const int kPathPlanningFieldNumber = 6;
  inline const ::PathPlanningPackage& path_planning() const;
  inline ::PathPlanningPackage* mutable_path_planning();
  inline ::PathPlanningPackage* release_path_planning();
  inline void set_allocated_path_planning(::PathPlanningPackage* path_planning);

  // optional float velocity_x = 7;
  inline bool has_velocity_x() const;
  inline void clear_velocity_x();
  static const int kVelocityXFieldNumber = 7;
  inline float velocity_x() const;
  inline void set_velocity_x(float value);

  // optional float velocity_y = 8;
  inline bool has_velocity_y() const;
  inline void clear_velocity_y();
  static const int kVelocityYFieldNumber = 8;
  inline float velocity_y() const;
  inline void set_velocity_y(float value);

  // optional float velocity_theta = 9;
  inline bool has_velocity_theta() const;
  inline void clear_velocity_theta();
  static const int kVelocityThetaFieldNumber = 9;
  inline float velocity_theta() const;
  inline void set_velocity_theta(float value);

  // optional float low_kick = 10;
  inline bool has_low_kick() const;
  inline void clear_low_kick();
  static const int kLowKickFieldNumber = 10;
  inline float low_kick() const;
  inline void set_low_kick(float value);

  // optional float high_kick = 11;
  inline bool has_high_kick() const;
  inline void clear_high_kick();
  static const int kHighKickFieldNumber = 11;
  inline float high_kick() const;
  inline void set_high_kick(float value);

  // optional float dribbler = 12;
  inline bool has_dribbler() const;
  inline void clear_dribbler();
  static const int kDribblerFieldNumber = 12;
  inline float dribbler() const;
  inline void set_dribbler(float value);

  // @@protoc_insertion_point(class_scope:AIRobotPackage)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_skill();
  inline void clear_has_skill();
  inline void set_has_tactic();
  inline void clear_has_tactic();
  inline void set_has_target_x();
  inline void clear_has_target_x();
  inline void set_has_target_y();
  inline void clear_has_target_y();
  inline void set_has_path_planning();
  inline void clear_has_path_planning();
  inline void set_has_velocity_x();
  inline void clear_has_velocity_x();
  inline void set_has_velocity_y();
  inline void clear_has_velocity_y();
  inline void set_has_velocity_theta();
  inline void clear_has_velocity_theta();
  inline void set_has_low_kick();
  inline void clear_has_low_kick();
  inline void set_has_high_kick();
  inline void clear_has_high_kick();
  inline void set_has_dribbler();
  inline void clear_has_dribbler();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* skill_;
  ::google::protobuf::uint32 id_;
  float target_x_;
  ::std::string* tactic_;
  ::PathPlanningPackage* path_planning_;
  float target_y_;
  float velocity_x_;
  float velocity_y_;
  float velocity_theta_;
  float low_kick_;
  float high_kick_;
  float dribbler_;
  friend void  protobuf_AddDesc_messages_5fai_5fdata_5fmanager_2eproto();
  friend void protobuf_AssignDesc_messages_5fai_5fdata_5fmanager_2eproto();
  friend void protobuf_ShutdownFile_messages_5fai_5fdata_5fmanager_2eproto();

  void InitAsDefaultInstance();
  static AIRobotPackage* default_instance_;
};
// -------------------------------------------------------------------

class AIDataManagerPackage : public ::google::protobuf::Message {
 public:
  AIDataManagerPackage();
  virtual ~AIDataManagerPackage();

  AIDataManagerPackage(const AIDataManagerPackage& from);

  inline AIDataManagerPackage& operator=(const AIDataManagerPackage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AIDataManagerPackage& default_instance();

  void Swap(AIDataManagerPackage* other);

  // implements Message ----------------------------------------------

  AIDataManagerPackage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AIDataManagerPackage& from);
  void MergeFrom(const AIDataManagerPackage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .AIRobotPackage team = 1;
  inline int team_size() const;
  inline void clear_team();
  static const int kTeamFieldNumber = 1;
  inline const ::AIRobotPackage& team(int index) const;
  inline ::AIRobotPackage* mutable_team(int index);
  inline ::AIRobotPackage* add_team();
  inline const ::google::protobuf::RepeatedPtrField< ::AIRobotPackage >&
      team() const;
  inline ::google::protobuf::RepeatedPtrField< ::AIRobotPackage >*
      mutable_team();

  // @@protoc_insertion_point(class_scope:AIDataManagerPackage)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::AIRobotPackage > team_;
  friend void  protobuf_AddDesc_messages_5fai_5fdata_5fmanager_2eproto();
  friend void protobuf_AssignDesc_messages_5fai_5fdata_5fmanager_2eproto();
  friend void protobuf_ShutdownFile_messages_5fai_5fdata_5fmanager_2eproto();

  void InitAsDefaultInstance();
  static AIDataManagerPackage* default_instance_;
};
// ===================================================================


// ===================================================================

// PathPlanningPackage

// repeated float x = 1;
inline int PathPlanningPackage::x_size() const {
  return x_.size();
}
inline void PathPlanningPackage::clear_x() {
  x_.Clear();
}
inline float PathPlanningPackage::x(int index) const {
  // @@protoc_insertion_point(field_get:PathPlanningPackage.x)
  return x_.Get(index);
}
inline void PathPlanningPackage::set_x(int index, float value) {
  x_.Set(index, value);
  // @@protoc_insertion_point(field_set:PathPlanningPackage.x)
}
inline void PathPlanningPackage::add_x(float value) {
  x_.Add(value);
  // @@protoc_insertion_point(field_add:PathPlanningPackage.x)
}
inline const ::google::protobuf::RepeatedField< float >&
PathPlanningPackage::x() const {
  // @@protoc_insertion_point(field_list:PathPlanningPackage.x)
  return x_;
}
inline ::google::protobuf::RepeatedField< float >*
PathPlanningPackage::mutable_x() {
  // @@protoc_insertion_point(field_mutable_list:PathPlanningPackage.x)
  return &x_;
}

// repeated float y = 2;
inline int PathPlanningPackage::y_size() const {
  return y_.size();
}
inline void PathPlanningPackage::clear_y() {
  y_.Clear();
}
inline float PathPlanningPackage::y(int index) const {
  // @@protoc_insertion_point(field_get:PathPlanningPackage.y)
  return y_.Get(index);
}
inline void PathPlanningPackage::set_y(int index, float value) {
  y_.Set(index, value);
  // @@protoc_insertion_point(field_set:PathPlanningPackage.y)
}
inline void PathPlanningPackage::add_y(float value) {
  y_.Add(value);
  // @@protoc_insertion_point(field_add:PathPlanningPackage.y)
}
inline const ::google::protobuf::RepeatedField< float >&
PathPlanningPackage::y() const {
  // @@protoc_insertion_point(field_list:PathPlanningPackage.y)
  return y_;
}
inline ::google::protobuf::RepeatedField< float >*
PathPlanningPackage::mutable_y() {
  // @@protoc_insertion_point(field_mutable_list:PathPlanningPackage.y)
  return &y_;
}

// -------------------------------------------------------------------

// AIRobotPackage

// required uint32 id = 1;
inline bool AIRobotPackage::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AIRobotPackage::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AIRobotPackage::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AIRobotPackage::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 AIRobotPackage::id() const {
  // @@protoc_insertion_point(field_get:AIRobotPackage.id)
  return id_;
}
inline void AIRobotPackage::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:AIRobotPackage.id)
}

// required string skill = 2;
inline bool AIRobotPackage::has_skill() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AIRobotPackage::set_has_skill() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AIRobotPackage::clear_has_skill() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AIRobotPackage::clear_skill() {
  if (skill_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    skill_->clear();
  }
  clear_has_skill();
}
inline const ::std::string& AIRobotPackage::skill() const {
  // @@protoc_insertion_point(field_get:AIRobotPackage.skill)
  return *skill_;
}
inline void AIRobotPackage::set_skill(const ::std::string& value) {
  set_has_skill();
  if (skill_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    skill_ = new ::std::string;
  }
  skill_->assign(value);
  // @@protoc_insertion_point(field_set:AIRobotPackage.skill)
}
inline void AIRobotPackage::set_skill(const char* value) {
  set_has_skill();
  if (skill_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    skill_ = new ::std::string;
  }
  skill_->assign(value);
  // @@protoc_insertion_point(field_set_char:AIRobotPackage.skill)
}
inline void AIRobotPackage::set_skill(const char* value, size_t size) {
  set_has_skill();
  if (skill_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    skill_ = new ::std::string;
  }
  skill_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AIRobotPackage.skill)
}
inline ::std::string* AIRobotPackage::mutable_skill() {
  set_has_skill();
  if (skill_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    skill_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:AIRobotPackage.skill)
  return skill_;
}
inline ::std::string* AIRobotPackage::release_skill() {
  clear_has_skill();
  if (skill_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = skill_;
    skill_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AIRobotPackage::set_allocated_skill(::std::string* skill) {
  if (skill_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete skill_;
  }
  if (skill) {
    set_has_skill();
    skill_ = skill;
  } else {
    clear_has_skill();
    skill_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:AIRobotPackage.skill)
}

// required string tactic = 3;
inline bool AIRobotPackage::has_tactic() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AIRobotPackage::set_has_tactic() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AIRobotPackage::clear_has_tactic() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AIRobotPackage::clear_tactic() {
  if (tactic_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tactic_->clear();
  }
  clear_has_tactic();
}
inline const ::std::string& AIRobotPackage::tactic() const {
  // @@protoc_insertion_point(field_get:AIRobotPackage.tactic)
  return *tactic_;
}
inline void AIRobotPackage::set_tactic(const ::std::string& value) {
  set_has_tactic();
  if (tactic_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tactic_ = new ::std::string;
  }
  tactic_->assign(value);
  // @@protoc_insertion_point(field_set:AIRobotPackage.tactic)
}
inline void AIRobotPackage::set_tactic(const char* value) {
  set_has_tactic();
  if (tactic_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tactic_ = new ::std::string;
  }
  tactic_->assign(value);
  // @@protoc_insertion_point(field_set_char:AIRobotPackage.tactic)
}
inline void AIRobotPackage::set_tactic(const char* value, size_t size) {
  set_has_tactic();
  if (tactic_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tactic_ = new ::std::string;
  }
  tactic_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AIRobotPackage.tactic)
}
inline ::std::string* AIRobotPackage::mutable_tactic() {
  set_has_tactic();
  if (tactic_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tactic_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:AIRobotPackage.tactic)
  return tactic_;
}
inline ::std::string* AIRobotPackage::release_tactic() {
  clear_has_tactic();
  if (tactic_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = tactic_;
    tactic_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AIRobotPackage::set_allocated_tactic(::std::string* tactic) {
  if (tactic_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete tactic_;
  }
  if (tactic) {
    set_has_tactic();
    tactic_ = tactic;
  } else {
    clear_has_tactic();
    tactic_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:AIRobotPackage.tactic)
}

// required float target_x = 4;
inline bool AIRobotPackage::has_target_x() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AIRobotPackage::set_has_target_x() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AIRobotPackage::clear_has_target_x() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AIRobotPackage::clear_target_x() {
  target_x_ = 0;
  clear_has_target_x();
}
inline float AIRobotPackage::target_x() const {
  // @@protoc_insertion_point(field_get:AIRobotPackage.target_x)
  return target_x_;
}
inline void AIRobotPackage::set_target_x(float value) {
  set_has_target_x();
  target_x_ = value;
  // @@protoc_insertion_point(field_set:AIRobotPackage.target_x)
}

// required float target_y = 5;
inline bool AIRobotPackage::has_target_y() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AIRobotPackage::set_has_target_y() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AIRobotPackage::clear_has_target_y() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AIRobotPackage::clear_target_y() {
  target_y_ = 0;
  clear_has_target_y();
}
inline float AIRobotPackage::target_y() const {
  // @@protoc_insertion_point(field_get:AIRobotPackage.target_y)
  return target_y_;
}
inline void AIRobotPackage::set_target_y(float value) {
  set_has_target_y();
  target_y_ = value;
  // @@protoc_insertion_point(field_set:AIRobotPackage.target_y)
}

// required .PathPlanningPackage path_planning = 6;
inline bool AIRobotPackage::has_path_planning() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void AIRobotPackage::set_has_path_planning() {
  _has_bits_[0] |= 0x00000020u;
}
inline void AIRobotPackage::clear_has_path_planning() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void AIRobotPackage::clear_path_planning() {
  if (path_planning_ != NULL) path_planning_->::PathPlanningPackage::Clear();
  clear_has_path_planning();
}
inline const ::PathPlanningPackage& AIRobotPackage::path_planning() const {
  // @@protoc_insertion_point(field_get:AIRobotPackage.path_planning)
  return path_planning_ != NULL ? *path_planning_ : *default_instance_->path_planning_;
}
inline ::PathPlanningPackage* AIRobotPackage::mutable_path_planning() {
  set_has_path_planning();
  if (path_planning_ == NULL) path_planning_ = new ::PathPlanningPackage;
  // @@protoc_insertion_point(field_mutable:AIRobotPackage.path_planning)
  return path_planning_;
}
inline ::PathPlanningPackage* AIRobotPackage::release_path_planning() {
  clear_has_path_planning();
  ::PathPlanningPackage* temp = path_planning_;
  path_planning_ = NULL;
  return temp;
}
inline void AIRobotPackage::set_allocated_path_planning(::PathPlanningPackage* path_planning) {
  delete path_planning_;
  path_planning_ = path_planning;
  if (path_planning) {
    set_has_path_planning();
  } else {
    clear_has_path_planning();
  }
  // @@protoc_insertion_point(field_set_allocated:AIRobotPackage.path_planning)
}

// optional float velocity_x = 7;
inline bool AIRobotPackage::has_velocity_x() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void AIRobotPackage::set_has_velocity_x() {
  _has_bits_[0] |= 0x00000040u;
}
inline void AIRobotPackage::clear_has_velocity_x() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void AIRobotPackage::clear_velocity_x() {
  velocity_x_ = 0;
  clear_has_velocity_x();
}
inline float AIRobotPackage::velocity_x() const {
  // @@protoc_insertion_point(field_get:AIRobotPackage.velocity_x)
  return velocity_x_;
}
inline void AIRobotPackage::set_velocity_x(float value) {
  set_has_velocity_x();
  velocity_x_ = value;
  // @@protoc_insertion_point(field_set:AIRobotPackage.velocity_x)
}

// optional float velocity_y = 8;
inline bool AIRobotPackage::has_velocity_y() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void AIRobotPackage::set_has_velocity_y() {
  _has_bits_[0] |= 0x00000080u;
}
inline void AIRobotPackage::clear_has_velocity_y() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void AIRobotPackage::clear_velocity_y() {
  velocity_y_ = 0;
  clear_has_velocity_y();
}
inline float AIRobotPackage::velocity_y() const {
  // @@protoc_insertion_point(field_get:AIRobotPackage.velocity_y)
  return velocity_y_;
}
inline void AIRobotPackage::set_velocity_y(float value) {
  set_has_velocity_y();
  velocity_y_ = value;
  // @@protoc_insertion_point(field_set:AIRobotPackage.velocity_y)
}

// optional float velocity_theta = 9;
inline bool AIRobotPackage::has_velocity_theta() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void AIRobotPackage::set_has_velocity_theta() {
  _has_bits_[0] |= 0x00000100u;
}
inline void AIRobotPackage::clear_has_velocity_theta() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void AIRobotPackage::clear_velocity_theta() {
  velocity_theta_ = 0;
  clear_has_velocity_theta();
}
inline float AIRobotPackage::velocity_theta() const {
  // @@protoc_insertion_point(field_get:AIRobotPackage.velocity_theta)
  return velocity_theta_;
}
inline void AIRobotPackage::set_velocity_theta(float value) {
  set_has_velocity_theta();
  velocity_theta_ = value;
  // @@protoc_insertion_point(field_set:AIRobotPackage.velocity_theta)
}

// optional float low_kick = 10;
inline bool AIRobotPackage::has_low_kick() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void AIRobotPackage::set_has_low_kick() {
  _has_bits_[0] |= 0x00000200u;
}
inline void AIRobotPackage::clear_has_low_kick() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void AIRobotPackage::clear_low_kick() {
  low_kick_ = 0;
  clear_has_low_kick();
}
inline float AIRobotPackage::low_kick() const {
  // @@protoc_insertion_point(field_get:AIRobotPackage.low_kick)
  return low_kick_;
}
inline void AIRobotPackage::set_low_kick(float value) {
  set_has_low_kick();
  low_kick_ = value;
  // @@protoc_insertion_point(field_set:AIRobotPackage.low_kick)
}

// optional float high_kick = 11;
inline bool AIRobotPackage::has_high_kick() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void AIRobotPackage::set_has_high_kick() {
  _has_bits_[0] |= 0x00000400u;
}
inline void AIRobotPackage::clear_has_high_kick() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void AIRobotPackage::clear_high_kick() {
  high_kick_ = 0;
  clear_has_high_kick();
}
inline float AIRobotPackage::high_kick() const {
  // @@protoc_insertion_point(field_get:AIRobotPackage.high_kick)
  return high_kick_;
}
inline void AIRobotPackage::set_high_kick(float value) {
  set_has_high_kick();
  high_kick_ = value;
  // @@protoc_insertion_point(field_set:AIRobotPackage.high_kick)
}

// optional float dribbler = 12;
inline bool AIRobotPackage::has_dribbler() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void AIRobotPackage::set_has_dribbler() {
  _has_bits_[0] |= 0x00000800u;
}
inline void AIRobotPackage::clear_has_dribbler() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void AIRobotPackage::clear_dribbler() {
  dribbler_ = 0;
  clear_has_dribbler();
}
inline float AIRobotPackage::dribbler() const {
  // @@protoc_insertion_point(field_get:AIRobotPackage.dribbler)
  return dribbler_;
}
inline void AIRobotPackage::set_dribbler(float value) {
  set_has_dribbler();
  dribbler_ = value;
  // @@protoc_insertion_point(field_set:AIRobotPackage.dribbler)
}

// -------------------------------------------------------------------

// AIDataManagerPackage

// repeated .AIRobotPackage team = 1;
inline int AIDataManagerPackage::team_size() const {
  return team_.size();
}
inline void AIDataManagerPackage::clear_team() {
  team_.Clear();
}
inline const ::AIRobotPackage& AIDataManagerPackage::team(int index) const {
  // @@protoc_insertion_point(field_get:AIDataManagerPackage.team)
  return team_.Get(index);
}
inline ::AIRobotPackage* AIDataManagerPackage::mutable_team(int index) {
  // @@protoc_insertion_point(field_mutable:AIDataManagerPackage.team)
  return team_.Mutable(index);
}
inline ::AIRobotPackage* AIDataManagerPackage::add_team() {
  // @@protoc_insertion_point(field_add:AIDataManagerPackage.team)
  return team_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::AIRobotPackage >&
AIDataManagerPackage::team() const {
  // @@protoc_insertion_point(field_list:AIDataManagerPackage.team)
  return team_;
}
inline ::google::protobuf::RepeatedPtrField< ::AIRobotPackage >*
AIDataManagerPackage::mutable_team() {
  // @@protoc_insertion_point(field_mutable_list:AIDataManagerPackage.team)
  return &team_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_messages_5fai_5fdata_5fmanager_2eproto__INCLUDED
