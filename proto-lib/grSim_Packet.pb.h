// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Packet.proto

#ifndef PROTOBUF_grSim_5fPacket_2eproto__INCLUDED
#define PROTOBUF_grSim_5fPacket_2eproto__INCLUDED

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
#include "grSim_Commands.pb.h"
#include "grSim_Replacement.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_grSim_5fPacket_2eproto();
void protobuf_AssignDesc_grSim_5fPacket_2eproto();
void protobuf_ShutdownFile_grSim_5fPacket_2eproto();

class grSim_Packet;

// ===================================================================

class grSim_Packet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:grSim_Packet) */ {
 public:
  grSim_Packet();
  virtual ~grSim_Packet();

  grSim_Packet(const grSim_Packet& from);

  inline grSim_Packet& operator=(const grSim_Packet& from) {
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
  static const grSim_Packet& default_instance();

  void Swap(grSim_Packet* other);

  // implements Message ----------------------------------------------

  inline grSim_Packet* New() const { return New(NULL); }

  grSim_Packet* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const grSim_Packet& from);
  void MergeFrom(const grSim_Packet& from);
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
  void InternalSwap(grSim_Packet* other);
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

  // optional .grSim_Commands commands = 1;
  bool has_commands() const;
  void clear_commands();
  static const int kCommandsFieldNumber = 1;
  const ::grSim_Commands& commands() const;
  ::grSim_Commands* mutable_commands();
  ::grSim_Commands* release_commands();
  void set_allocated_commands(::grSim_Commands* commands);

  // optional .grSim_Replacement replacement = 2;
  bool has_replacement() const;
  void clear_replacement();
  static const int kReplacementFieldNumber = 2;
  const ::grSim_Replacement& replacement() const;
  ::grSim_Replacement* mutable_replacement();
  ::grSim_Replacement* release_replacement();
  void set_allocated_replacement(::grSim_Replacement* replacement);

  // @@protoc_insertion_point(class_scope:grSim_Packet)
 private:
  inline void set_has_commands();
  inline void clear_has_commands();
  inline void set_has_replacement();
  inline void clear_has_replacement();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::grSim_Commands* commands_;
  ::grSim_Replacement* replacement_;
  friend void  protobuf_AddDesc_grSim_5fPacket_2eproto();
  friend void protobuf_AssignDesc_grSim_5fPacket_2eproto();
  friend void protobuf_ShutdownFile_grSim_5fPacket_2eproto();

  void InitAsDefaultInstance();
  static grSim_Packet* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// grSim_Packet

// optional .grSim_Commands commands = 1;
inline bool grSim_Packet::has_commands() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void grSim_Packet::set_has_commands() {
  _has_bits_[0] |= 0x00000001u;
}
inline void grSim_Packet::clear_has_commands() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void grSim_Packet::clear_commands() {
  if (commands_ != NULL) commands_->::grSim_Commands::Clear();
  clear_has_commands();
}
inline const ::grSim_Commands& grSim_Packet::commands() const {
  // @@protoc_insertion_point(field_get:grSim_Packet.commands)
  return commands_ != NULL ? *commands_ : *default_instance_->commands_;
}
inline ::grSim_Commands* grSim_Packet::mutable_commands() {
  set_has_commands();
  if (commands_ == NULL) {
    commands_ = new ::grSim_Commands;
  }
  // @@protoc_insertion_point(field_mutable:grSim_Packet.commands)
  return commands_;
}
inline ::grSim_Commands* grSim_Packet::release_commands() {
  // @@protoc_insertion_point(field_release:grSim_Packet.commands)
  clear_has_commands();
  ::grSim_Commands* temp = commands_;
  commands_ = NULL;
  return temp;
}
inline void grSim_Packet::set_allocated_commands(::grSim_Commands* commands) {
  delete commands_;
  commands_ = commands;
  if (commands) {
    set_has_commands();
  } else {
    clear_has_commands();
  }
  // @@protoc_insertion_point(field_set_allocated:grSim_Packet.commands)
}

// optional .grSim_Replacement replacement = 2;
inline bool grSim_Packet::has_replacement() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void grSim_Packet::set_has_replacement() {
  _has_bits_[0] |= 0x00000002u;
}
inline void grSim_Packet::clear_has_replacement() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void grSim_Packet::clear_replacement() {
  if (replacement_ != NULL) replacement_->::grSim_Replacement::Clear();
  clear_has_replacement();
}
inline const ::grSim_Replacement& grSim_Packet::replacement() const {
  // @@protoc_insertion_point(field_get:grSim_Packet.replacement)
  return replacement_ != NULL ? *replacement_ : *default_instance_->replacement_;
}
inline ::grSim_Replacement* grSim_Packet::mutable_replacement() {
  set_has_replacement();
  if (replacement_ == NULL) {
    replacement_ = new ::grSim_Replacement;
  }
  // @@protoc_insertion_point(field_mutable:grSim_Packet.replacement)
  return replacement_;
}
inline ::grSim_Replacement* grSim_Packet::release_replacement() {
  // @@protoc_insertion_point(field_release:grSim_Packet.replacement)
  clear_has_replacement();
  ::grSim_Replacement* temp = replacement_;
  replacement_ = NULL;
  return temp;
}
inline void grSim_Packet::set_allocated_replacement(::grSim_Replacement* replacement) {
  delete replacement_;
  replacement_ = replacement;
  if (replacement) {
    set_has_replacement();
  } else {
    clear_has_replacement();
  }
  // @@protoc_insertion_point(field_set_allocated:grSim_Packet.replacement)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_grSim_5fPacket_2eproto__INCLUDED
