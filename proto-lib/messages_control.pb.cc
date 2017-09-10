// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_control.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "messages_control.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* ControlPackage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ControlPackage_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* ControlPackage_FieldSide_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ControlPackage_TeamColor_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_messages_5fcontrol_2eproto() {
  protobuf_AddDesc_messages_5fcontrol_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "messages_control.proto");
  GOOGLE_CHECK(file != NULL);
  ControlPackage_descriptor_ = file->message_type(0);
  static const int ControlPackage_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlPackage, field_side_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlPackage, team_color_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlPackage, id_gk_),
  };
  ControlPackage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ControlPackage_descriptor_,
      ControlPackage::default_instance_,
      ControlPackage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlPackage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlPackage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ControlPackage));
  ControlPackage_FieldSide_descriptor_ = ControlPackage_descriptor_->enum_type(0);
  ControlPackage_TeamColor_descriptor_ = ControlPackage_descriptor_->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_messages_5fcontrol_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ControlPackage_descriptor_, &ControlPackage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_messages_5fcontrol_2eproto() {
  delete ControlPackage::default_instance_;
  delete ControlPackage_reflection_;
}

void protobuf_AddDesc_messages_5fcontrol_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026messages_control.proto\"\302\001\n\016ControlPack"
    "age\022-\n\nfield_side\030\001 \002(\0162\031.ControlPackage"
    ".FieldSide\022-\n\nteam_color\030\002 \002(\0162\031.Control"
    "Package.TeamColor\022\r\n\005id_GK\030\003 \002(\005\" \n\tFiel"
    "dSide\022\010\n\004Left\020\000\022\t\n\005Right\020\001\"!\n\tTeamColor\022"
    "\n\n\006Yellow\020\000\022\010\n\004Blue\020\001", 221);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "messages_control.proto", &protobuf_RegisterTypes);
  ControlPackage::default_instance_ = new ControlPackage();
  ControlPackage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_messages_5fcontrol_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_messages_5fcontrol_2eproto {
  StaticDescriptorInitializer_messages_5fcontrol_2eproto() {
    protobuf_AddDesc_messages_5fcontrol_2eproto();
  }
} static_descriptor_initializer_messages_5fcontrol_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* ControlPackage_FieldSide_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ControlPackage_FieldSide_descriptor_;
}
bool ControlPackage_FieldSide_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const ControlPackage_FieldSide ControlPackage::Left;
const ControlPackage_FieldSide ControlPackage::Right;
const ControlPackage_FieldSide ControlPackage::FieldSide_MIN;
const ControlPackage_FieldSide ControlPackage::FieldSide_MAX;
const int ControlPackage::FieldSide_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* ControlPackage_TeamColor_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ControlPackage_TeamColor_descriptor_;
}
bool ControlPackage_TeamColor_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const ControlPackage_TeamColor ControlPackage::Yellow;
const ControlPackage_TeamColor ControlPackage::Blue;
const ControlPackage_TeamColor ControlPackage::TeamColor_MIN;
const ControlPackage_TeamColor ControlPackage::TeamColor_MAX;
const int ControlPackage::TeamColor_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int ControlPackage::kFieldSideFieldNumber;
const int ControlPackage::kTeamColorFieldNumber;
const int ControlPackage::kIdGKFieldNumber;
#endif  // !_MSC_VER

ControlPackage::ControlPackage()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ControlPackage)
}

void ControlPackage::InitAsDefaultInstance() {
}

ControlPackage::ControlPackage(const ControlPackage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ControlPackage)
}

void ControlPackage::SharedCtor() {
  _cached_size_ = 0;
  field_side_ = 0;
  team_color_ = 0;
  id_gk_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ControlPackage::~ControlPackage() {
  // @@protoc_insertion_point(destructor:ControlPackage)
  SharedDtor();
}

void ControlPackage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ControlPackage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ControlPackage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ControlPackage_descriptor_;
}

const ControlPackage& ControlPackage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_messages_5fcontrol_2eproto();
  return *default_instance_;
}

ControlPackage* ControlPackage::default_instance_ = NULL;

ControlPackage* ControlPackage::New() const {
  return new ControlPackage;
}

void ControlPackage::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<ControlPackage*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(field_side_, id_gk_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ControlPackage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ControlPackage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .ControlPackage.FieldSide field_side = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::ControlPackage_FieldSide_IsValid(value)) {
            set_field_side(static_cast< ::ControlPackage_FieldSide >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_team_color;
        break;
      }

      // required .ControlPackage.TeamColor team_color = 2;
      case 2: {
        if (tag == 16) {
         parse_team_color:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::ControlPackage_TeamColor_IsValid(value)) {
            set_team_color(static_cast< ::ControlPackage_TeamColor >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_id_GK;
        break;
      }

      // required int32 id_GK = 3;
      case 3: {
        if (tag == 24) {
         parse_id_GK:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_gk_)));
          set_has_id_gk();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ControlPackage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ControlPackage)
  return false;
#undef DO_
}

void ControlPackage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ControlPackage)
  // required .ControlPackage.FieldSide field_side = 1;
  if (has_field_side()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->field_side(), output);
  }

  // required .ControlPackage.TeamColor team_color = 2;
  if (has_team_color()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->team_color(), output);
  }

  // required int32 id_GK = 3;
  if (has_id_gk()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->id_gk(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ControlPackage)
}

::google::protobuf::uint8* ControlPackage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ControlPackage)
  // required .ControlPackage.FieldSide field_side = 1;
  if (has_field_side()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->field_side(), target);
  }

  // required .ControlPackage.TeamColor team_color = 2;
  if (has_team_color()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->team_color(), target);
  }

  // required int32 id_GK = 3;
  if (has_id_gk()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->id_gk(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ControlPackage)
  return target;
}

int ControlPackage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .ControlPackage.FieldSide field_side = 1;
    if (has_field_side()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->field_side());
    }

    // required .ControlPackage.TeamColor team_color = 2;
    if (has_team_color()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->team_color());
    }

    // required int32 id_GK = 3;
    if (has_id_gk()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id_gk());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ControlPackage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ControlPackage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ControlPackage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ControlPackage::MergeFrom(const ControlPackage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_field_side()) {
      set_field_side(from.field_side());
    }
    if (from.has_team_color()) {
      set_team_color(from.team_color());
    }
    if (from.has_id_gk()) {
      set_id_gk(from.id_gk());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ControlPackage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ControlPackage::CopyFrom(const ControlPackage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ControlPackage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void ControlPackage::Swap(ControlPackage* other) {
  if (other != this) {
    std::swap(field_side_, other->field_side_);
    std::swap(team_color_, other->team_color_);
    std::swap(id_gk_, other->id_gk_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ControlPackage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ControlPackage_descriptor_;
  metadata.reflection = ControlPackage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
