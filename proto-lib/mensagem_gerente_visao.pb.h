// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mensagem_gerente_visao.proto

#ifndef PROTOBUF_mensagem_5fgerente_5fvisao_2eproto__INCLUDED
#define PROTOBUF_mensagem_5fgerente_5fvisao_2eproto__INCLUDED

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
void protobuf_AddDesc_mensagem_5fgerente_5fvisao_2eproto();
void protobuf_AssignDesc_mensagem_5fgerente_5fvisao_2eproto();
void protobuf_ShutdownFile_mensagem_5fgerente_5fvisao_2eproto();

class PacoteBola;
class PacoteRobo;
class PacoteVisao;

// ===================================================================

class PacoteBola : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PacoteBola) */ {
 public:
  PacoteBola();
  virtual ~PacoteBola();

  PacoteBola(const PacoteBola& from);

  inline PacoteBola& operator=(const PacoteBola& from) {
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
  static const PacoteBola& default_instance();

  void Swap(PacoteBola* other);

  // implements Message ----------------------------------------------

  inline PacoteBola* New() const { return New(NULL); }

  PacoteBola* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PacoteBola& from);
  void MergeFrom(const PacoteBola& from);
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
  void InternalSwap(PacoteBola* other);
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

  // required float x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // required float y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // optional float z = 3;
  bool has_z() const;
  void clear_z();
  static const int kZFieldNumber = 3;
  float z() const;
  void set_z(float value);

  // @@protoc_insertion_point(class_scope:PacoteBola)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_z();
  inline void clear_has_z();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  float x_;
  float y_;
  float z_;
  friend void  protobuf_AddDesc_mensagem_5fgerente_5fvisao_2eproto();
  friend void protobuf_AssignDesc_mensagem_5fgerente_5fvisao_2eproto();
  friend void protobuf_ShutdownFile_mensagem_5fgerente_5fvisao_2eproto();

  void InitAsDefaultInstance();
  static PacoteBola* default_instance_;
};
// -------------------------------------------------------------------

class PacoteRobo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PacoteRobo) */ {
 public:
  PacoteRobo();
  virtual ~PacoteRobo();

  PacoteRobo(const PacoteRobo& from);

  inline PacoteRobo& operator=(const PacoteRobo& from) {
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
  static const PacoteRobo& default_instance();

  void Swap(PacoteRobo* other);

  // implements Message ----------------------------------------------

  inline PacoteRobo* New() const { return New(NULL); }

  PacoteRobo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PacoteRobo& from);
  void MergeFrom(const PacoteRobo& from);
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
  void InternalSwap(PacoteRobo* other);
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

  // required float x = 2;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 2;
  float x() const;
  void set_x(float value);

  // required float y = 3;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 3;
  float y() const;
  void set_y(float value);

  // required float orientation = 4;
  bool has_orientation() const;
  void clear_orientation();
  static const int kOrientationFieldNumber = 4;
  float orientation() const;
  void set_orientation(float value);

  // @@protoc_insertion_point(class_scope:PacoteRobo)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_orientation();
  inline void clear_has_orientation();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 id_;
  float x_;
  float y_;
  float orientation_;
  friend void  protobuf_AddDesc_mensagem_5fgerente_5fvisao_2eproto();
  friend void protobuf_AssignDesc_mensagem_5fgerente_5fvisao_2eproto();
  friend void protobuf_ShutdownFile_mensagem_5fgerente_5fvisao_2eproto();

  void InitAsDefaultInstance();
  static PacoteRobo* default_instance_;
};
// -------------------------------------------------------------------

class PacoteVisao : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PacoteVisao) */ {
 public:
  PacoteVisao();
  virtual ~PacoteVisao();

  PacoteVisao(const PacoteVisao& from);

  inline PacoteVisao& operator=(const PacoteVisao& from) {
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
  static const PacoteVisao& default_instance();

  void Swap(PacoteVisao* other);

  // implements Message ----------------------------------------------

  inline PacoteVisao* New() const { return New(NULL); }

  PacoteVisao* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PacoteVisao& from);
  void MergeFrom(const PacoteVisao& from);
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
  void InternalSwap(PacoteVisao* other);
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

  // required uint32 numeroFrame = 1;
  bool has_numeroframe() const;
  void clear_numeroframe();
  static const int kNumeroFrameFieldNumber = 1;
  ::google::protobuf::uint32 numeroframe() const;
  void set_numeroframe(::google::protobuf::uint32 value);

  // required double delay = 2;
  bool has_delay() const;
  void clear_delay();
  static const int kDelayFieldNumber = 2;
  double delay() const;
  void set_delay(double value);

  // required .PacoteBola bola = 3;
  bool has_bola() const;
  void clear_bola();
  static const int kBolaFieldNumber = 3;
  const ::PacoteBola& bola() const;
  ::PacoteBola* mutable_bola();
  ::PacoteBola* release_bola();
  void set_allocated_bola(::PacoteBola* bola);

  // repeated .PacoteRobo robosEquipe = 4;
  int robosequipe_size() const;
  void clear_robosequipe();
  static const int kRobosEquipeFieldNumber = 4;
  const ::PacoteRobo& robosequipe(int index) const;
  ::PacoteRobo* mutable_robosequipe(int index);
  ::PacoteRobo* add_robosequipe();
  ::google::protobuf::RepeatedPtrField< ::PacoteRobo >*
      mutable_robosequipe();
  const ::google::protobuf::RepeatedPtrField< ::PacoteRobo >&
      robosequipe() const;

  // repeated .PacoteRobo robosAdversarios = 5;
  int robosadversarios_size() const;
  void clear_robosadversarios();
  static const int kRobosAdversariosFieldNumber = 5;
  const ::PacoteRobo& robosadversarios(int index) const;
  ::PacoteRobo* mutable_robosadversarios(int index);
  ::PacoteRobo* add_robosadversarios();
  ::google::protobuf::RepeatedPtrField< ::PacoteRobo >*
      mutable_robosadversarios();
  const ::google::protobuf::RepeatedPtrField< ::PacoteRobo >&
      robosadversarios() const;

  // @@protoc_insertion_point(class_scope:PacoteVisao)
 private:
  inline void set_has_numeroframe();
  inline void clear_has_numeroframe();
  inline void set_has_delay();
  inline void clear_has_delay();
  inline void set_has_bola();
  inline void clear_has_bola();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double delay_;
  ::PacoteBola* bola_;
  ::google::protobuf::RepeatedPtrField< ::PacoteRobo > robosequipe_;
  ::google::protobuf::RepeatedPtrField< ::PacoteRobo > robosadversarios_;
  ::google::protobuf::uint32 numeroframe_;
  friend void  protobuf_AddDesc_mensagem_5fgerente_5fvisao_2eproto();
  friend void protobuf_AssignDesc_mensagem_5fgerente_5fvisao_2eproto();
  friend void protobuf_ShutdownFile_mensagem_5fgerente_5fvisao_2eproto();

  void InitAsDefaultInstance();
  static PacoteVisao* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PacoteBola

// required float x = 1;
inline bool PacoteBola::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PacoteBola::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PacoteBola::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PacoteBola::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline float PacoteBola::x() const {
  // @@protoc_insertion_point(field_get:PacoteBola.x)
  return x_;
}
inline void PacoteBola::set_x(float value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:PacoteBola.x)
}

// required float y = 2;
inline bool PacoteBola::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PacoteBola::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PacoteBola::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PacoteBola::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline float PacoteBola::y() const {
  // @@protoc_insertion_point(field_get:PacoteBola.y)
  return y_;
}
inline void PacoteBola::set_y(float value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:PacoteBola.y)
}

// optional float z = 3;
inline bool PacoteBola::has_z() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PacoteBola::set_has_z() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PacoteBola::clear_has_z() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PacoteBola::clear_z() {
  z_ = 0;
  clear_has_z();
}
inline float PacoteBola::z() const {
  // @@protoc_insertion_point(field_get:PacoteBola.z)
  return z_;
}
inline void PacoteBola::set_z(float value) {
  set_has_z();
  z_ = value;
  // @@protoc_insertion_point(field_set:PacoteBola.z)
}

// -------------------------------------------------------------------

// PacoteRobo

// required uint32 id = 1;
inline bool PacoteRobo::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PacoteRobo::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PacoteRobo::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PacoteRobo::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 PacoteRobo::id() const {
  // @@protoc_insertion_point(field_get:PacoteRobo.id)
  return id_;
}
inline void PacoteRobo::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:PacoteRobo.id)
}

// required float x = 2;
inline bool PacoteRobo::has_x() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PacoteRobo::set_has_x() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PacoteRobo::clear_has_x() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PacoteRobo::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline float PacoteRobo::x() const {
  // @@protoc_insertion_point(field_get:PacoteRobo.x)
  return x_;
}
inline void PacoteRobo::set_x(float value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:PacoteRobo.x)
}

// required float y = 3;
inline bool PacoteRobo::has_y() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PacoteRobo::set_has_y() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PacoteRobo::clear_has_y() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PacoteRobo::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline float PacoteRobo::y() const {
  // @@protoc_insertion_point(field_get:PacoteRobo.y)
  return y_;
}
inline void PacoteRobo::set_y(float value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:PacoteRobo.y)
}

// required float orientation = 4;
inline bool PacoteRobo::has_orientation() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PacoteRobo::set_has_orientation() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PacoteRobo::clear_has_orientation() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PacoteRobo::clear_orientation() {
  orientation_ = 0;
  clear_has_orientation();
}
inline float PacoteRobo::orientation() const {
  // @@protoc_insertion_point(field_get:PacoteRobo.orientation)
  return orientation_;
}
inline void PacoteRobo::set_orientation(float value) {
  set_has_orientation();
  orientation_ = value;
  // @@protoc_insertion_point(field_set:PacoteRobo.orientation)
}

// -------------------------------------------------------------------

// PacoteVisao

// required uint32 numeroFrame = 1;
inline bool PacoteVisao::has_numeroframe() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PacoteVisao::set_has_numeroframe() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PacoteVisao::clear_has_numeroframe() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PacoteVisao::clear_numeroframe() {
  numeroframe_ = 0u;
  clear_has_numeroframe();
}
inline ::google::protobuf::uint32 PacoteVisao::numeroframe() const {
  // @@protoc_insertion_point(field_get:PacoteVisao.numeroFrame)
  return numeroframe_;
}
inline void PacoteVisao::set_numeroframe(::google::protobuf::uint32 value) {
  set_has_numeroframe();
  numeroframe_ = value;
  // @@protoc_insertion_point(field_set:PacoteVisao.numeroFrame)
}

// required double delay = 2;
inline bool PacoteVisao::has_delay() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PacoteVisao::set_has_delay() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PacoteVisao::clear_has_delay() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PacoteVisao::clear_delay() {
  delay_ = 0;
  clear_has_delay();
}
inline double PacoteVisao::delay() const {
  // @@protoc_insertion_point(field_get:PacoteVisao.delay)
  return delay_;
}
inline void PacoteVisao::set_delay(double value) {
  set_has_delay();
  delay_ = value;
  // @@protoc_insertion_point(field_set:PacoteVisao.delay)
}

// required .PacoteBola bola = 3;
inline bool PacoteVisao::has_bola() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PacoteVisao::set_has_bola() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PacoteVisao::clear_has_bola() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PacoteVisao::clear_bola() {
  if (bola_ != NULL) bola_->::PacoteBola::Clear();
  clear_has_bola();
}
inline const ::PacoteBola& PacoteVisao::bola() const {
  // @@protoc_insertion_point(field_get:PacoteVisao.bola)
  return bola_ != NULL ? *bola_ : *default_instance_->bola_;
}
inline ::PacoteBola* PacoteVisao::mutable_bola() {
  set_has_bola();
  if (bola_ == NULL) {
    bola_ = new ::PacoteBola;
  }
  // @@protoc_insertion_point(field_mutable:PacoteVisao.bola)
  return bola_;
}
inline ::PacoteBola* PacoteVisao::release_bola() {
  // @@protoc_insertion_point(field_release:PacoteVisao.bola)
  clear_has_bola();
  ::PacoteBola* temp = bola_;
  bola_ = NULL;
  return temp;
}
inline void PacoteVisao::set_allocated_bola(::PacoteBola* bola) {
  delete bola_;
  bola_ = bola;
  if (bola) {
    set_has_bola();
  } else {
    clear_has_bola();
  }
  // @@protoc_insertion_point(field_set_allocated:PacoteVisao.bola)
}

// repeated .PacoteRobo robosEquipe = 4;
inline int PacoteVisao::robosequipe_size() const {
  return robosequipe_.size();
}
inline void PacoteVisao::clear_robosequipe() {
  robosequipe_.Clear();
}
inline const ::PacoteRobo& PacoteVisao::robosequipe(int index) const {
  // @@protoc_insertion_point(field_get:PacoteVisao.robosEquipe)
  return robosequipe_.Get(index);
}
inline ::PacoteRobo* PacoteVisao::mutable_robosequipe(int index) {
  // @@protoc_insertion_point(field_mutable:PacoteVisao.robosEquipe)
  return robosequipe_.Mutable(index);
}
inline ::PacoteRobo* PacoteVisao::add_robosequipe() {
  // @@protoc_insertion_point(field_add:PacoteVisao.robosEquipe)
  return robosequipe_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PacoteRobo >*
PacoteVisao::mutable_robosequipe() {
  // @@protoc_insertion_point(field_mutable_list:PacoteVisao.robosEquipe)
  return &robosequipe_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PacoteRobo >&
PacoteVisao::robosequipe() const {
  // @@protoc_insertion_point(field_list:PacoteVisao.robosEquipe)
  return robosequipe_;
}

// repeated .PacoteRobo robosAdversarios = 5;
inline int PacoteVisao::robosadversarios_size() const {
  return robosadversarios_.size();
}
inline void PacoteVisao::clear_robosadversarios() {
  robosadversarios_.Clear();
}
inline const ::PacoteRobo& PacoteVisao::robosadversarios(int index) const {
  // @@protoc_insertion_point(field_get:PacoteVisao.robosAdversarios)
  return robosadversarios_.Get(index);
}
inline ::PacoteRobo* PacoteVisao::mutable_robosadversarios(int index) {
  // @@protoc_insertion_point(field_mutable:PacoteVisao.robosAdversarios)
  return robosadversarios_.Mutable(index);
}
inline ::PacoteRobo* PacoteVisao::add_robosadversarios() {
  // @@protoc_insertion_point(field_add:PacoteVisao.robosAdversarios)
  return robosadversarios_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PacoteRobo >*
PacoteVisao::mutable_robosadversarios() {
  // @@protoc_insertion_point(field_mutable_list:PacoteVisao.robosAdversarios)
  return &robosadversarios_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PacoteRobo >&
PacoteVisao::robosadversarios() const {
  // @@protoc_insertion_point(field_list:PacoteVisao.robosAdversarios)
  return robosadversarios_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mensagem_5fgerente_5fvisao_2eproto__INCLUDED