// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ai_variables.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ai_variables.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* AIVariablesPackage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AIVariablesPackage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ai_5fvariables_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_ai_5fvariables_2eproto() {
  protobuf_AddDesc_ai_5fvariables_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ai_variables.proto");
  GOOGLE_CHECK(file != NULL);
  AIVariablesPackage_descriptor_ = file->message_type(0);
  static const int AIVariablesPackage_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AIVariablesPackage, component_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AIVariablesPackage, component_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AIVariablesPackage, component_value_),
  };
  AIVariablesPackage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AIVariablesPackage_descriptor_,
      AIVariablesPackage::default_instance_,
      AIVariablesPackage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AIVariablesPackage, _has_bits_[0]),
      -1,
      -1,
      sizeof(AIVariablesPackage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AIVariablesPackage, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ai_5fvariables_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AIVariablesPackage_descriptor_, &AIVariablesPackage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ai_5fvariables_2eproto() {
  delete AIVariablesPackage::default_instance_;
  delete AIVariablesPackage_reflection_;
}

void protobuf_AddDesc_ai_5fvariables_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_ai_5fvariables_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022ai_variables.proto\"X\n\022AIVariablesPacka"
    "ge\022\021\n\tcomponent\030\001 \003(\t\022\026\n\016component_name\030"
    "\002 \003(\t\022\027\n\017component_value\030\003 \003(\t", 110);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ai_variables.proto", &protobuf_RegisterTypes);
  AIVariablesPackage::default_instance_ = new AIVariablesPackage();
  AIVariablesPackage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ai_5fvariables_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ai_5fvariables_2eproto {
  StaticDescriptorInitializer_ai_5fvariables_2eproto() {
    protobuf_AddDesc_ai_5fvariables_2eproto();
  }
} static_descriptor_initializer_ai_5fvariables_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AIVariablesPackage::kComponentFieldNumber;
const int AIVariablesPackage::kComponentNameFieldNumber;
const int AIVariablesPackage::kComponentValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AIVariablesPackage::AIVariablesPackage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:AIVariablesPackage)
}

void AIVariablesPackage::InitAsDefaultInstance() {
}

AIVariablesPackage::AIVariablesPackage(const AIVariablesPackage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:AIVariablesPackage)
}

void AIVariablesPackage::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AIVariablesPackage::~AIVariablesPackage() {
  // @@protoc_insertion_point(destructor:AIVariablesPackage)
  SharedDtor();
}

void AIVariablesPackage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AIVariablesPackage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AIVariablesPackage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AIVariablesPackage_descriptor_;
}

const AIVariablesPackage& AIVariablesPackage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ai_5fvariables_2eproto();
  return *default_instance_;
}

AIVariablesPackage* AIVariablesPackage::default_instance_ = NULL;

AIVariablesPackage* AIVariablesPackage::New(::google::protobuf::Arena* arena) const {
  AIVariablesPackage* n = new AIVariablesPackage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AIVariablesPackage::Clear() {
// @@protoc_insertion_point(message_clear_start:AIVariablesPackage)
  component_.Clear();
  component_name_.Clear();
  component_value_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool AIVariablesPackage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:AIVariablesPackage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string component = 1;
      case 1: {
        if (tag == 10) {
         parse_component:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_component()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->component(this->component_size() - 1).data(),
            this->component(this->component_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "AIVariablesPackage.component");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_component;
        if (input->ExpectTag(18)) goto parse_component_name;
        break;
      }

      // repeated string component_name = 2;
      case 2: {
        if (tag == 18) {
         parse_component_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_component_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->component_name(this->component_name_size() - 1).data(),
            this->component_name(this->component_name_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "AIVariablesPackage.component_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_component_name;
        if (input->ExpectTag(26)) goto parse_component_value;
        break;
      }

      // repeated string component_value = 3;
      case 3: {
        if (tag == 26) {
         parse_component_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_component_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->component_value(this->component_value_size() - 1).data(),
            this->component_value(this->component_value_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "AIVariablesPackage.component_value");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_component_value;
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
  // @@protoc_insertion_point(parse_success:AIVariablesPackage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:AIVariablesPackage)
  return false;
#undef DO_
}

void AIVariablesPackage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:AIVariablesPackage)
  // repeated string component = 1;
  for (int i = 0; i < this->component_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->component(i).data(), this->component(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "AIVariablesPackage.component");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->component(i), output);
  }

  // repeated string component_name = 2;
  for (int i = 0; i < this->component_name_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->component_name(i).data(), this->component_name(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "AIVariablesPackage.component_name");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->component_name(i), output);
  }

  // repeated string component_value = 3;
  for (int i = 0; i < this->component_value_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->component_value(i).data(), this->component_value(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "AIVariablesPackage.component_value");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->component_value(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:AIVariablesPackage)
}

::google::protobuf::uint8* AIVariablesPackage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:AIVariablesPackage)
  // repeated string component = 1;
  for (int i = 0; i < this->component_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->component(i).data(), this->component(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "AIVariablesPackage.component");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->component(i), target);
  }

  // repeated string component_name = 2;
  for (int i = 0; i < this->component_name_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->component_name(i).data(), this->component_name(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "AIVariablesPackage.component_name");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->component_name(i), target);
  }

  // repeated string component_value = 3;
  for (int i = 0; i < this->component_value_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->component_value(i).data(), this->component_value(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "AIVariablesPackage.component_value");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->component_value(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AIVariablesPackage)
  return target;
}

int AIVariablesPackage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:AIVariablesPackage)
  int total_size = 0;

  // repeated string component = 1;
  total_size += 1 * this->component_size();
  for (int i = 0; i < this->component_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->component(i));
  }

  // repeated string component_name = 2;
  total_size += 1 * this->component_name_size();
  for (int i = 0; i < this->component_name_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->component_name(i));
  }

  // repeated string component_value = 3;
  total_size += 1 * this->component_value_size();
  for (int i = 0; i < this->component_value_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->component_value(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AIVariablesPackage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AIVariablesPackage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AIVariablesPackage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AIVariablesPackage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AIVariablesPackage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AIVariablesPackage)
    MergeFrom(*source);
  }
}

void AIVariablesPackage::MergeFrom(const AIVariablesPackage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AIVariablesPackage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  component_.MergeFrom(from.component_);
  component_name_.MergeFrom(from.component_name_);
  component_value_.MergeFrom(from.component_value_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void AIVariablesPackage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AIVariablesPackage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AIVariablesPackage::CopyFrom(const AIVariablesPackage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AIVariablesPackage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AIVariablesPackage::IsInitialized() const {

  return true;
}

void AIVariablesPackage::Swap(AIVariablesPackage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AIVariablesPackage::InternalSwap(AIVariablesPackage* other) {
  component_.UnsafeArenaSwap(&other->component_);
  component_name_.UnsafeArenaSwap(&other->component_name_);
  component_value_.UnsafeArenaSwap(&other->component_value_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AIVariablesPackage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AIVariablesPackage_descriptor_;
  metadata.reflection = AIVariablesPackage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AIVariablesPackage

// repeated string component = 1;
int AIVariablesPackage::component_size() const {
  return component_.size();
}
void AIVariablesPackage::clear_component() {
  component_.Clear();
}
 const ::std::string& AIVariablesPackage::component(int index) const {
  // @@protoc_insertion_point(field_get:AIVariablesPackage.component)
  return component_.Get(index);
}
 ::std::string* AIVariablesPackage::mutable_component(int index) {
  // @@protoc_insertion_point(field_mutable:AIVariablesPackage.component)
  return component_.Mutable(index);
}
 void AIVariablesPackage::set_component(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:AIVariablesPackage.component)
  component_.Mutable(index)->assign(value);
}
 void AIVariablesPackage::set_component(int index, const char* value) {
  component_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:AIVariablesPackage.component)
}
 void AIVariablesPackage::set_component(int index, const char* value, size_t size) {
  component_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AIVariablesPackage.component)
}
 ::std::string* AIVariablesPackage::add_component() {
  // @@protoc_insertion_point(field_add_mutable:AIVariablesPackage.component)
  return component_.Add();
}
 void AIVariablesPackage::add_component(const ::std::string& value) {
  component_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:AIVariablesPackage.component)
}
 void AIVariablesPackage::add_component(const char* value) {
  component_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:AIVariablesPackage.component)
}
 void AIVariablesPackage::add_component(const char* value, size_t size) {
  component_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:AIVariablesPackage.component)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
AIVariablesPackage::component() const {
  // @@protoc_insertion_point(field_list:AIVariablesPackage.component)
  return component_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
AIVariablesPackage::mutable_component() {
  // @@protoc_insertion_point(field_mutable_list:AIVariablesPackage.component)
  return &component_;
}

// repeated string component_name = 2;
int AIVariablesPackage::component_name_size() const {
  return component_name_.size();
}
void AIVariablesPackage::clear_component_name() {
  component_name_.Clear();
}
 const ::std::string& AIVariablesPackage::component_name(int index) const {
  // @@protoc_insertion_point(field_get:AIVariablesPackage.component_name)
  return component_name_.Get(index);
}
 ::std::string* AIVariablesPackage::mutable_component_name(int index) {
  // @@protoc_insertion_point(field_mutable:AIVariablesPackage.component_name)
  return component_name_.Mutable(index);
}
 void AIVariablesPackage::set_component_name(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:AIVariablesPackage.component_name)
  component_name_.Mutable(index)->assign(value);
}
 void AIVariablesPackage::set_component_name(int index, const char* value) {
  component_name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:AIVariablesPackage.component_name)
}
 void AIVariablesPackage::set_component_name(int index, const char* value, size_t size) {
  component_name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AIVariablesPackage.component_name)
}
 ::std::string* AIVariablesPackage::add_component_name() {
  // @@protoc_insertion_point(field_add_mutable:AIVariablesPackage.component_name)
  return component_name_.Add();
}
 void AIVariablesPackage::add_component_name(const ::std::string& value) {
  component_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:AIVariablesPackage.component_name)
}
 void AIVariablesPackage::add_component_name(const char* value) {
  component_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:AIVariablesPackage.component_name)
}
 void AIVariablesPackage::add_component_name(const char* value, size_t size) {
  component_name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:AIVariablesPackage.component_name)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
AIVariablesPackage::component_name() const {
  // @@protoc_insertion_point(field_list:AIVariablesPackage.component_name)
  return component_name_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
AIVariablesPackage::mutable_component_name() {
  // @@protoc_insertion_point(field_mutable_list:AIVariablesPackage.component_name)
  return &component_name_;
}

// repeated string component_value = 3;
int AIVariablesPackage::component_value_size() const {
  return component_value_.size();
}
void AIVariablesPackage::clear_component_value() {
  component_value_.Clear();
}
 const ::std::string& AIVariablesPackage::component_value(int index) const {
  // @@protoc_insertion_point(field_get:AIVariablesPackage.component_value)
  return component_value_.Get(index);
}
 ::std::string* AIVariablesPackage::mutable_component_value(int index) {
  // @@protoc_insertion_point(field_mutable:AIVariablesPackage.component_value)
  return component_value_.Mutable(index);
}
 void AIVariablesPackage::set_component_value(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:AIVariablesPackage.component_value)
  component_value_.Mutable(index)->assign(value);
}
 void AIVariablesPackage::set_component_value(int index, const char* value) {
  component_value_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:AIVariablesPackage.component_value)
}
 void AIVariablesPackage::set_component_value(int index, const char* value, size_t size) {
  component_value_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AIVariablesPackage.component_value)
}
 ::std::string* AIVariablesPackage::add_component_value() {
  // @@protoc_insertion_point(field_add_mutable:AIVariablesPackage.component_value)
  return component_value_.Add();
}
 void AIVariablesPackage::add_component_value(const ::std::string& value) {
  component_value_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:AIVariablesPackage.component_value)
}
 void AIVariablesPackage::add_component_value(const char* value) {
  component_value_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:AIVariablesPackage.component_value)
}
 void AIVariablesPackage::add_component_value(const char* value, size_t size) {
  component_value_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:AIVariablesPackage.component_value)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
AIVariablesPackage::component_value() const {
  // @@protoc_insertion_point(field_list:AIVariablesPackage.component_value)
  return component_value_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
AIVariablesPackage::mutable_component_value() {
  // @@protoc_insertion_point(field_mutable_list:AIVariablesPackage.component_value)
  return &component_value_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
