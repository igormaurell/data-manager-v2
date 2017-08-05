// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Commands.proto

#ifndef PROTOBUF_grSim_5fCommands_2eproto__INCLUDED
#define PROTOBUF_grSim_5fCommands_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2007000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_grSim_5fCommands_2eproto();
void protobuf_AssignDesc_grSim_5fCommands_2eproto();
void protobuf_ShutdownFile_grSim_5fCommands_2eproto();

class grSim_Commands;
class grSim_Robot_Command;

// ===================================================================

class grSim_Robot_Command : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:grSim_Robot_Command) */ {
 public:
  grSim_Robot_Command();
  virtual ~grSim_Robot_Command();

  grSim_Robot_Command(const grSim_Robot_Command& from);

  inline grSim_Robot_Command& operator=(const grSim_Robot_Command& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const grSim_Robot_Command& default_instance();

  void Swap(grSim_Robot_Command* other);

  // implements Message ----------------------------------------------

  inline grSim_Robot_Command* New() const { return New(NULL); }

  grSim_Robot_Command* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const grSim_Robot_Command& from);
  void MergeFrom(const grSim_Robot_Command& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(grSim_Robot_Command* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // required float kickspeedx = 2;
  bool has_kickspeedx() const;
  void clear_kickspeedx();
  static const int kKickspeedxFieldNumber = 2;
  float kickspeedx() const;
  void set_kickspeedx(float value);

  // required float kickspeedz = 3;
  bool has_kickspeedz() const;
  void clear_kickspeedz();
  static const int kKickspeedzFieldNumber = 3;
  float kickspeedz() const;
  void set_kickspeedz(float value);

  // required float veltangent = 4;
  bool has_veltangent() const;
  void clear_veltangent();
  static const int kVeltangentFieldNumber = 4;
  float veltangent() const;
  void set_veltangent(float value);

  // required float velnormal = 5;
  bool has_velnormal() const;
  void clear_velnormal();
  static const int kVelnormalFieldNumber = 5;
  float velnormal() const;
  void set_velnormal(float value);

  // required float velangular = 6;
  bool has_velangular() const;
  void clear_velangular();
  static const int kVelangularFieldNumber = 6;
  float velangular() const;
  void set_velangular(float value);

  // required bool spinner = 7;
  bool has_spinner() const;
  void clear_spinner();
  static const int kSpinnerFieldNumber = 7;
  bool spinner() const;
  void set_spinner(bool value);

  // required bool wheelsspeed = 8;
  bool has_wheelsspeed() const;
  void clear_wheelsspeed();
  static const int kWheelsspeedFieldNumber = 8;
  bool wheelsspeed() const;
  void set_wheelsspeed(bool value);

  // optional float wheel1 = 9;
  bool has_wheel1() const;
  void clear_wheel1();
  static const int kWheel1FieldNumber = 9;
  float wheel1() const;
  void set_wheel1(float value);

  // optional float wheel2 = 10;
  bool has_wheel2() const;
  void clear_wheel2();
  static const int kWheel2FieldNumber = 10;
  float wheel2() const;
  void set_wheel2(float value);

  // optional float wheel3 = 11;
  bool has_wheel3() const;
  void clear_wheel3();
  static const int kWheel3FieldNumber = 11;
  float wheel3() const;
  void set_wheel3(float value);

  // optional float wheel4 = 12;
  bool has_wheel4() const;
  void clear_wheel4();
  static const int kWheel4FieldNumber = 12;
  float wheel4() const;
  void set_wheel4(float value);

  // @@protoc_insertion_point(class_scope:grSim_Robot_Command)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_kickspeedx();
  inline void clear_has_kickspeedx();
  inline void set_has_kickspeedz();
  inline void clear_has_kickspeedz();
  inline void set_has_veltangent();
  inline void clear_has_veltangent();
  inline void set_has_velnormal();
  inline void clear_has_velnormal();
  inline void set_has_velangular();
  inline void clear_has_velangular();
  inline void set_has_spinner();
  inline void clear_has_spinner();
  inline void set_has_wheelsspeed();
  inline void clear_has_wheelsspeed();
  inline void set_has_wheel1();
  inline void clear_has_wheel1();
  inline void set_has_wheel2();
  inline void clear_has_wheel2();
  inline void set_has_wheel3();
  inline void clear_has_wheel3();
  inline void set_has_wheel4();
  inline void clear_has_wheel4();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 id_;
  float kickspeedx_;
  float kickspeedz_;
  float veltangent_;
  float velnormal_;
  float velangular_;
  bool spinner_;
  bool wheelsspeed_;
  float wheel1_;
  float wheel2_;
  float wheel3_;
  float wheel4_;
  friend void  protobuf_AddDesc_grSim_5fCommands_2eproto();
  friend void protobuf_AssignDesc_grSim_5fCommands_2eproto();
  friend void protobuf_ShutdownFile_grSim_5fCommands_2eproto();

  void InitAsDefaultInstance();
  static grSim_Robot_Command* default_instance_;
};
// -------------------------------------------------------------------

class grSim_Commands : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:grSim_Commands) */ {
 public:
  grSim_Commands();
  virtual ~grSim_Commands();

  grSim_Commands(const grSim_Commands& from);

  inline grSim_Commands& operator=(const grSim_Commands& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const grSim_Commands& default_instance();

  void Swap(grSim_Commands* other);

  // implements Message ----------------------------------------------

  inline grSim_Commands* New() const { return New(NULL); }

  grSim_Commands* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const grSim_Commands& from);
  void MergeFrom(const grSim_Commands& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(grSim_Commands* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  double timestamp() const;
  void set_timestamp(double value);

  // required bool isteamyellow = 2;
  bool has_isteamyellow() const;
  void clear_isteamyellow();
  static const int kIsteamyellowFieldNumber = 2;
  bool isteamyellow() const;
  void set_isteamyellow(bool value);

  // repeated .grSim_Robot_Command robot_commands = 3;
  int robot_commands_size() const;
  void clear_robot_commands();
  static const int kRobotCommandsFieldNumber = 3;
  const ::grSim_Robot_Command& robot_commands(int index) const;
  ::grSim_Robot_Command* mutable_robot_commands(int index);
  ::grSim_Robot_Command* add_robot_commands();
  ::google::protobuf::RepeatedPtrField< ::grSim_Robot_Command >*
      mutable_robot_commands();
  const ::google::protobuf::RepeatedPtrField< ::grSim_Robot_Command >&
      robot_commands() const;

  // @@protoc_insertion_point(class_scope:grSim_Commands)
 private:
  inline void set_has_timestamp();
  inline void clear_has_timestamp();
  inline void set_has_isteamyellow();
  inline void clear_has_isteamyellow();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double timestamp_;
  ::google::protobuf::RepeatedPtrField< ::grSim_Robot_Command > robot_commands_;
  bool isteamyellow_;
  friend void  protobuf_AddDesc_grSim_5fCommands_2eproto();
  friend void protobuf_AssignDesc_grSim_5fCommands_2eproto();
  friend void protobuf_ShutdownFile_grSim_5fCommands_2eproto();

  void InitAsDefaultInstance();
  static grSim_Commands* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// grSim_Robot_Command

// required uint32 id = 1;
inline bool grSim_Robot_Command::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void grSim_Robot_Command::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void grSim_Robot_Command::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void grSim_Robot_Command::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 grSim_Robot_Command::id() const {
  // @@protoc_insertion_point(field_get:grSim_Robot_Command.id)
  return id_;
}
inline void grSim_Robot_Command::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:grSim_Robot_Command.id)
}

// required float kickspeedx = 2;
inline bool grSim_Robot_Command::has_kickspeedx() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void grSim_Robot_Command::set_has_kickspeedx() {
  _has_bits_[0] |= 0x00000002u;
}
inline void grSim_Robot_Command::clear_has_kickspeedx() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void grSim_Robot_Command::clear_kickspeedx() {
  kickspeedx_ = 0;
  clear_has_kickspeedx();
}
inline float grSim_Robot_Command::kickspeedx() const {
  // @@protoc_insertion_point(field_get:grSim_Robot_Command.kickspeedx)
  return kickspeedx_;
}
inline void grSim_Robot_Command::set_kickspeedx(float value) {
  set_has_kickspeedx();
  kickspeedx_ = value;
  // @@protoc_insertion_point(field_set:grSim_Robot_Command.kickspeedx)
}

// required float kickspeedz = 3;
inline bool grSim_Robot_Command::has_kickspeedz() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void grSim_Robot_Command::set_has_kickspeedz() {
  _has_bits_[0] |= 0x00000004u;
}
inline void grSim_Robot_Command::clear_has_kickspeedz() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void grSim_Robot_Command::clear_kickspeedz() {
  kickspeedz_ = 0;
  clear_has_kickspeedz();
}
inline float grSim_Robot_Command::kickspeedz() const {
  // @@protoc_insertion_point(field_get:grSim_Robot_Command.kickspeedz)
  return kickspeedz_;
}
inline void grSim_Robot_Command::set_kickspeedz(float value) {
  set_has_kickspeedz();
  kickspeedz_ = value;
  // @@protoc_insertion_point(field_set:grSim_Robot_Command.kickspeedz)
}

// required float veltangent = 4;
inline bool grSim_Robot_Command::has_veltangent() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void grSim_Robot_Command::set_has_veltangent() {
  _has_bits_[0] |= 0x00000008u;
}
inline void grSim_Robot_Command::clear_has_veltangent() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void grSim_Robot_Command::clear_veltangent() {
  veltangent_ = 0;
  clear_has_veltangent();
}
inline float grSim_Robot_Command::veltangent() const {
  // @@protoc_insertion_point(field_get:grSim_Robot_Command.veltangent)
  return veltangent_;
}
inline void grSim_Robot_Command::set_veltangent(float value) {
  set_has_veltangent();
  veltangent_ = value;
  // @@protoc_insertion_point(field_set:grSim_Robot_Command.veltangent)
}

// required float velnormal = 5;
inline bool grSim_Robot_Command::has_velnormal() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void grSim_Robot_Command::set_has_velnormal() {
  _has_bits_[0] |= 0x00000010u;
}
inline void grSim_Robot_Command::clear_has_velnormal() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void grSim_Robot_Command::clear_velnormal() {
  velnormal_ = 0;
  clear_has_velnormal();
}
inline float grSim_Robot_Command::velnormal() const {
  // @@protoc_insertion_point(field_get:grSim_Robot_Command.velnormal)
  return velnormal_;
}
inline void grSim_Robot_Command::set_velnormal(float value) {
  set_has_velnormal();
  velnormal_ = value;
  // @@protoc_insertion_point(field_set:grSim_Robot_Command.velnormal)
}

// required float velangular = 6;
inline bool grSim_Robot_Command::has_velangular() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void grSim_Robot_Command::set_has_velangular() {
  _has_bits_[0] |= 0x00000020u;
}
inline void grSim_Robot_Command::clear_has_velangular() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void grSim_Robot_Command::clear_velangular() {
  velangular_ = 0;
  clear_has_velangular();
}
inline float grSim_Robot_Command::velangular() const {
  // @@protoc_insertion_point(field_get:grSim_Robot_Command.velangular)
  return velangular_;
}
inline void grSim_Robot_Command::set_velangular(float value) {
  set_has_velangular();
  velangular_ = value;
  // @@protoc_insertion_point(field_set:grSim_Robot_Command.velangular)
}

// required bool spinner = 7;
inline bool grSim_Robot_Command::has_spinner() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void grSim_Robot_Command::set_has_spinner() {
  _has_bits_[0] |= 0x00000040u;
}
inline void grSim_Robot_Command::clear_has_spinner() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void grSim_Robot_Command::clear_spinner() {
  spinner_ = false;
  clear_has_spinner();
}
inline bool grSim_Robot_Command::spinner() const {
  // @@protoc_insertion_point(field_get:grSim_Robot_Command.spinner)
  return spinner_;
}
inline void grSim_Robot_Command::set_spinner(bool value) {
  set_has_spinner();
  spinner_ = value;
  // @@protoc_insertion_point(field_set:grSim_Robot_Command.spinner)
}

// required bool wheelsspeed = 8;
inline bool grSim_Robot_Command::has_wheelsspeed() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void grSim_Robot_Command::set_has_wheelsspeed() {
  _has_bits_[0] |= 0x00000080u;
}
inline void grSim_Robot_Command::clear_has_wheelsspeed() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void grSim_Robot_Command::clear_wheelsspeed() {
  wheelsspeed_ = false;
  clear_has_wheelsspeed();
}
inline bool grSim_Robot_Command::wheelsspeed() const {
  // @@protoc_insertion_point(field_get:grSim_Robot_Command.wheelsspeed)
  return wheelsspeed_;
}
inline void grSim_Robot_Command::set_wheelsspeed(bool value) {
  set_has_wheelsspeed();
  wheelsspeed_ = value;
  // @@protoc_insertion_point(field_set:grSim_Robot_Command.wheelsspeed)
}

// optional float wheel1 = 9;
inline bool grSim_Robot_Command::has_wheel1() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void grSim_Robot_Command::set_has_wheel1() {
  _has_bits_[0] |= 0x00000100u;
}
inline void grSim_Robot_Command::clear_has_wheel1() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void grSim_Robot_Command::clear_wheel1() {
  wheel1_ = 0;
  clear_has_wheel1();
}
inline float grSim_Robot_Command::wheel1() const {
  // @@protoc_insertion_point(field_get:grSim_Robot_Command.wheel1)
  return wheel1_;
}
inline void grSim_Robot_Command::set_wheel1(float value) {
  set_has_wheel1();
  wheel1_ = value;
  // @@protoc_insertion_point(field_set:grSim_Robot_Command.wheel1)
}

// optional float wheel2 = 10;
inline bool grSim_Robot_Command::has_wheel2() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void grSim_Robot_Command::set_has_wheel2() {
  _has_bits_[0] |= 0x00000200u;
}
inline void grSim_Robot_Command::clear_has_wheel2() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void grSim_Robot_Command::clear_wheel2() {
  wheel2_ = 0;
  clear_has_wheel2();
}
inline float grSim_Robot_Command::wheel2() const {
  // @@protoc_insertion_point(field_get:grSim_Robot_Command.wheel2)
  return wheel2_;
}
inline void grSim_Robot_Command::set_wheel2(float value) {
  set_has_wheel2();
  wheel2_ = value;
  // @@protoc_insertion_point(field_set:grSim_Robot_Command.wheel2)
}

// optional float wheel3 = 11;
inline bool grSim_Robot_Command::has_wheel3() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void grSim_Robot_Command::set_has_wheel3() {
  _has_bits_[0] |= 0x00000400u;
}
inline void grSim_Robot_Command::clear_has_wheel3() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void grSim_Robot_Command::clear_wheel3() {
  wheel3_ = 0;
  clear_has_wheel3();
}
inline float grSim_Robot_Command::wheel3() const {
  // @@protoc_insertion_point(field_get:grSim_Robot_Command.wheel3)
  return wheel3_;
}
inline void grSim_Robot_Command::set_wheel3(float value) {
  set_has_wheel3();
  wheel3_ = value;
  // @@protoc_insertion_point(field_set:grSim_Robot_Command.wheel3)
}

// optional float wheel4 = 12;
inline bool grSim_Robot_Command::has_wheel4() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void grSim_Robot_Command::set_has_wheel4() {
  _has_bits_[0] |= 0x00000800u;
}
inline void grSim_Robot_Command::clear_has_wheel4() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void grSim_Robot_Command::clear_wheel4() {
  wheel4_ = 0;
  clear_has_wheel4();
}
inline float grSim_Robot_Command::wheel4() const {
  // @@protoc_insertion_point(field_get:grSim_Robot_Command.wheel4)
  return wheel4_;
}
inline void grSim_Robot_Command::set_wheel4(float value) {
  set_has_wheel4();
  wheel4_ = value;
  // @@protoc_insertion_point(field_set:grSim_Robot_Command.wheel4)
}

// -------------------------------------------------------------------

// grSim_Commands

// required double timestamp = 1;
inline bool grSim_Commands::has_timestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void grSim_Commands::set_has_timestamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void grSim_Commands::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void grSim_Commands::clear_timestamp() {
  timestamp_ = 0;
  clear_has_timestamp();
}
inline double grSim_Commands::timestamp() const {
  // @@protoc_insertion_point(field_get:grSim_Commands.timestamp)
  return timestamp_;
}
inline void grSim_Commands::set_timestamp(double value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:grSim_Commands.timestamp)
}

// required bool isteamyellow = 2;
inline bool grSim_Commands::has_isteamyellow() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void grSim_Commands::set_has_isteamyellow() {
  _has_bits_[0] |= 0x00000002u;
}
inline void grSim_Commands::clear_has_isteamyellow() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void grSim_Commands::clear_isteamyellow() {
  isteamyellow_ = false;
  clear_has_isteamyellow();
}
inline bool grSim_Commands::isteamyellow() const {
  // @@protoc_insertion_point(field_get:grSim_Commands.isteamyellow)
  return isteamyellow_;
}
inline void grSim_Commands::set_isteamyellow(bool value) {
  set_has_isteamyellow();
  isteamyellow_ = value;
  // @@protoc_insertion_point(field_set:grSim_Commands.isteamyellow)
}

// repeated .grSim_Robot_Command robot_commands = 3;
inline int grSim_Commands::robot_commands_size() const {
  return robot_commands_.size();
}
inline void grSim_Commands::clear_robot_commands() {
  robot_commands_.Clear();
}
inline const ::grSim_Robot_Command& grSim_Commands::robot_commands(int index) const {
  // @@protoc_insertion_point(field_get:grSim_Commands.robot_commands)
  return robot_commands_.Get(index);
}
inline ::grSim_Robot_Command* grSim_Commands::mutable_robot_commands(int index) {
  // @@protoc_insertion_point(field_mutable:grSim_Commands.robot_commands)
  return robot_commands_.Mutable(index);
}
inline ::grSim_Robot_Command* grSim_Commands::add_robot_commands() {
  // @@protoc_insertion_point(field_add:grSim_Commands.robot_commands)
  return robot_commands_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::grSim_Robot_Command >*
grSim_Commands::mutable_robot_commands() {
  // @@protoc_insertion_point(field_mutable_list:grSim_Commands.robot_commands)
  return &robot_commands_;
}
inline const ::google::protobuf::RepeatedPtrField< ::grSim_Robot_Command >&
grSim_Commands::robot_commands() const {
  // @@protoc_insertion_point(field_list:grSim_Commands.robot_commands)
  return robot_commands_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_grSim_5fCommands_2eproto__INCLUDED
