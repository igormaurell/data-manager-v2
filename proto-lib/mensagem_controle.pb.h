// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mensagem_controle.proto

#ifndef PROTOBUF_mensagem_5fcontrole_2eproto__INCLUDED
#define PROTOBUF_mensagem_5fcontrole_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_mensagem_5fcontrole_2eproto();
void protobuf_AssignDesc_mensagem_5fcontrole_2eproto();
void protobuf_ShutdownFile_mensagem_5fcontrole_2eproto();

class PacoteControle;

enum PacoteControle_LadoCampo {
  PacoteControle_LadoCampo_ESQUERDO = 0,
  PacoteControle_LadoCampo_DIREITO = 1
};
bool PacoteControle_LadoCampo_IsValid(int value);
const PacoteControle_LadoCampo PacoteControle_LadoCampo_LadoCampo_MIN = PacoteControle_LadoCampo_ESQUERDO;
const PacoteControle_LadoCampo PacoteControle_LadoCampo_LadoCampo_MAX = PacoteControle_LadoCampo_DIREITO;
const int PacoteControle_LadoCampo_LadoCampo_ARRAYSIZE = PacoteControle_LadoCampo_LadoCampo_MAX + 1;

const ::google::protobuf::EnumDescriptor* PacoteControle_LadoCampo_descriptor();
inline const ::std::string& PacoteControle_LadoCampo_Name(PacoteControle_LadoCampo value) {
  return ::google::protobuf::internal::NameOfEnum(
    PacoteControle_LadoCampo_descriptor(), value);
}
inline bool PacoteControle_LadoCampo_Parse(
    const ::std::string& name, PacoteControle_LadoCampo* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PacoteControle_LadoCampo>(
    PacoteControle_LadoCampo_descriptor(), name, value);
}
enum PacoteControle_CorEquipe {
  PacoteControle_CorEquipe_AMARELO = 0,
  PacoteControle_CorEquipe_AZUL = 1
};
bool PacoteControle_CorEquipe_IsValid(int value);
const PacoteControle_CorEquipe PacoteControle_CorEquipe_CorEquipe_MIN = PacoteControle_CorEquipe_AMARELO;
const PacoteControle_CorEquipe PacoteControle_CorEquipe_CorEquipe_MAX = PacoteControle_CorEquipe_AZUL;
const int PacoteControle_CorEquipe_CorEquipe_ARRAYSIZE = PacoteControle_CorEquipe_CorEquipe_MAX + 1;

const ::google::protobuf::EnumDescriptor* PacoteControle_CorEquipe_descriptor();
inline const ::std::string& PacoteControle_CorEquipe_Name(PacoteControle_CorEquipe value) {
  return ::google::protobuf::internal::NameOfEnum(
    PacoteControle_CorEquipe_descriptor(), value);
}
inline bool PacoteControle_CorEquipe_Parse(
    const ::std::string& name, PacoteControle_CorEquipe* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PacoteControle_CorEquipe>(
    PacoteControle_CorEquipe_descriptor(), name, value);
}
// ===================================================================

class PacoteControle : public ::google::protobuf::Message {
 public:
  PacoteControle();
  virtual ~PacoteControle();

  PacoteControle(const PacoteControle& from);

  inline PacoteControle& operator=(const PacoteControle& from) {
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
  static const PacoteControle& default_instance();

  void Swap(PacoteControle* other);

  // implements Message ----------------------------------------------

  PacoteControle* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PacoteControle& from);
  void MergeFrom(const PacoteControle& from);
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

  typedef PacoteControle_LadoCampo LadoCampo;
  static const LadoCampo ESQUERDO = PacoteControle_LadoCampo_ESQUERDO;
  static const LadoCampo DIREITO = PacoteControle_LadoCampo_DIREITO;
  static inline bool LadoCampo_IsValid(int value) {
    return PacoteControle_LadoCampo_IsValid(value);
  }
  static const LadoCampo LadoCampo_MIN =
    PacoteControle_LadoCampo_LadoCampo_MIN;
  static const LadoCampo LadoCampo_MAX =
    PacoteControle_LadoCampo_LadoCampo_MAX;
  static const int LadoCampo_ARRAYSIZE =
    PacoteControle_LadoCampo_LadoCampo_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  LadoCampo_descriptor() {
    return PacoteControle_LadoCampo_descriptor();
  }
  static inline const ::std::string& LadoCampo_Name(LadoCampo value) {
    return PacoteControle_LadoCampo_Name(value);
  }
  static inline bool LadoCampo_Parse(const ::std::string& name,
      LadoCampo* value) {
    return PacoteControle_LadoCampo_Parse(name, value);
  }

  typedef PacoteControle_CorEquipe CorEquipe;
  static const CorEquipe AMARELO = PacoteControle_CorEquipe_AMARELO;
  static const CorEquipe AZUL = PacoteControle_CorEquipe_AZUL;
  static inline bool CorEquipe_IsValid(int value) {
    return PacoteControle_CorEquipe_IsValid(value);
  }
  static const CorEquipe CorEquipe_MIN =
    PacoteControle_CorEquipe_CorEquipe_MIN;
  static const CorEquipe CorEquipe_MAX =
    PacoteControle_CorEquipe_CorEquipe_MAX;
  static const int CorEquipe_ARRAYSIZE =
    PacoteControle_CorEquipe_CorEquipe_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CorEquipe_descriptor() {
    return PacoteControle_CorEquipe_descriptor();
  }
  static inline const ::std::string& CorEquipe_Name(CorEquipe value) {
    return PacoteControle_CorEquipe_Name(value);
  }
  static inline bool CorEquipe_Parse(const ::std::string& name,
      CorEquipe* value) {
    return PacoteControle_CorEquipe_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .PacoteControle.LadoCampo ladoCampo = 1;
  inline bool has_ladocampo() const;
  inline void clear_ladocampo();
  static const int kLadoCampoFieldNumber = 1;
  inline ::PacoteControle_LadoCampo ladocampo() const;
  inline void set_ladocampo(::PacoteControle_LadoCampo value);

  // required .PacoteControle.CorEquipe corEquipe = 2;
  inline bool has_corequipe() const;
  inline void clear_corequipe();
  static const int kCorEquipeFieldNumber = 2;
  inline ::PacoteControle_CorEquipe corequipe() const;
  inline void set_corequipe(::PacoteControle_CorEquipe value);

  // required int32 idGoleiro = 3;
  inline bool has_idgoleiro() const;
  inline void clear_idgoleiro();
  static const int kIdGoleiroFieldNumber = 3;
  inline ::google::protobuf::int32 idgoleiro() const;
  inline void set_idgoleiro(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PacoteControle)
 private:
  inline void set_has_ladocampo();
  inline void clear_has_ladocampo();
  inline void set_has_corequipe();
  inline void clear_has_corequipe();
  inline void set_has_idgoleiro();
  inline void clear_has_idgoleiro();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int ladocampo_;
  int corequipe_;
  ::google::protobuf::int32 idgoleiro_;
  friend void  protobuf_AddDesc_mensagem_5fcontrole_2eproto();
  friend void protobuf_AssignDesc_mensagem_5fcontrole_2eproto();
  friend void protobuf_ShutdownFile_mensagem_5fcontrole_2eproto();

  void InitAsDefaultInstance();
  static PacoteControle* default_instance_;
};
// ===================================================================


// ===================================================================

// PacoteControle

// required .PacoteControle.LadoCampo ladoCampo = 1;
inline bool PacoteControle::has_ladocampo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PacoteControle::set_has_ladocampo() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PacoteControle::clear_has_ladocampo() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PacoteControle::clear_ladocampo() {
  ladocampo_ = 0;
  clear_has_ladocampo();
}
inline ::PacoteControle_LadoCampo PacoteControle::ladocampo() const {
  // @@protoc_insertion_point(field_get:PacoteControle.ladoCampo)
  return static_cast< ::PacoteControle_LadoCampo >(ladocampo_);
}
inline void PacoteControle::set_ladocampo(::PacoteControle_LadoCampo value) {
  assert(::PacoteControle_LadoCampo_IsValid(value));
  set_has_ladocampo();
  ladocampo_ = value;
  // @@protoc_insertion_point(field_set:PacoteControle.ladoCampo)
}

// required .PacoteControle.CorEquipe corEquipe = 2;
inline bool PacoteControle::has_corequipe() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PacoteControle::set_has_corequipe() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PacoteControle::clear_has_corequipe() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PacoteControle::clear_corequipe() {
  corequipe_ = 0;
  clear_has_corequipe();
}
inline ::PacoteControle_CorEquipe PacoteControle::corequipe() const {
  // @@protoc_insertion_point(field_get:PacoteControle.corEquipe)
  return static_cast< ::PacoteControle_CorEquipe >(corequipe_);
}
inline void PacoteControle::set_corequipe(::PacoteControle_CorEquipe value) {
  assert(::PacoteControle_CorEquipe_IsValid(value));
  set_has_corequipe();
  corequipe_ = value;
  // @@protoc_insertion_point(field_set:PacoteControle.corEquipe)
}

// required int32 idGoleiro = 3;
inline bool PacoteControle::has_idgoleiro() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PacoteControle::set_has_idgoleiro() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PacoteControle::clear_has_idgoleiro() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PacoteControle::clear_idgoleiro() {
  idgoleiro_ = 0;
  clear_has_idgoleiro();
}
inline ::google::protobuf::int32 PacoteControle::idgoleiro() const {
  // @@protoc_insertion_point(field_get:PacoteControle.idGoleiro)
  return idgoleiro_;
}
inline void PacoteControle::set_idgoleiro(::google::protobuf::int32 value) {
  set_has_idgoleiro();
  idgoleiro_ = value;
  // @@protoc_insertion_point(field_set:PacoteControle.idGoleiro)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::PacoteControle_LadoCampo> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PacoteControle_LadoCampo>() {
  return ::PacoteControle_LadoCampo_descriptor();
}
template <> struct is_proto_enum< ::PacoteControle_CorEquipe> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PacoteControle_CorEquipe>() {
  return ::PacoteControle_CorEquipe_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mensagem_5fcontrole_2eproto__INCLUDED
