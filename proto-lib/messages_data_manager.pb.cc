// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_data_manager.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "messages_data_manager.pb.h"

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

const ::google::protobuf::Descriptor* DataPackage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DataPackage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_messages_5fdata_5fmanager_2eproto() {
  protobuf_AddDesc_messages_5fdata_5fmanager_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "messages_data_manager.proto");
  GOOGLE_CHECK(file != NULL);
  DataPackage_descriptor_ = file->message_type(0);
  static const int DataPackage_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataPackage, vision_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataPackage, referee_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataPackage, control_),
  };
  DataPackage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DataPackage_descriptor_,
      DataPackage::default_instance_,
      DataPackage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataPackage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataPackage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DataPackage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_messages_5fdata_5fmanager_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DataPackage_descriptor_, &DataPackage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_messages_5fdata_5fmanager_2eproto() {
  delete DataPackage::default_instance_;
  delete DataPackage_reflection_;
}

void protobuf_AddDesc_messages_5fdata_5fmanager_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_messages_5frobocup_5fssl_5freferee_2eproto();
  ::protobuf_AddDesc_messages_5fvision_5fmanager_2eproto();
  ::protobuf_AddDesc_messages_5fcontrol_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033messages_data_manager.proto\032\"messages_"
    "robocup_ssl_referee.proto\032\035messages_visi"
    "on_manager.proto\032\026messages_control.proto"
    "\"n\n\013DataPackage\022\036\n\006vision\030\001 \002(\0132\016.Vision"
    "Package\022\035\n\007referee\030\002 \002(\0132\014.SSL_Referee\022 "
    "\n\007control\030\003 \001(\0132\017.ControlPackage", 232);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "messages_data_manager.proto", &protobuf_RegisterTypes);
  DataPackage::default_instance_ = new DataPackage();
  DataPackage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_messages_5fdata_5fmanager_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_messages_5fdata_5fmanager_2eproto {
  StaticDescriptorInitializer_messages_5fdata_5fmanager_2eproto() {
    protobuf_AddDesc_messages_5fdata_5fmanager_2eproto();
  }
} static_descriptor_initializer_messages_5fdata_5fmanager_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int DataPackage::kVisionFieldNumber;
const int DataPackage::kRefereeFieldNumber;
const int DataPackage::kControlFieldNumber;
#endif  // !_MSC_VER

DataPackage::DataPackage()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:DataPackage)
}

void DataPackage::InitAsDefaultInstance() {
  vision_ = const_cast< ::VisionPackage*>(&::VisionPackage::default_instance());
  referee_ = const_cast< ::SSL_Referee*>(&::SSL_Referee::default_instance());
  control_ = const_cast< ::ControlPackage*>(&::ControlPackage::default_instance());
}

DataPackage::DataPackage(const DataPackage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:DataPackage)
}

void DataPackage::SharedCtor() {
  _cached_size_ = 0;
  vision_ = NULL;
  referee_ = NULL;
  control_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DataPackage::~DataPackage() {
  // @@protoc_insertion_point(destructor:DataPackage)
  SharedDtor();
}

void DataPackage::SharedDtor() {
  if (this != default_instance_) {
    delete vision_;
    delete referee_;
    delete control_;
  }
}

void DataPackage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DataPackage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DataPackage_descriptor_;
}

const DataPackage& DataPackage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_messages_5fdata_5fmanager_2eproto();
  return *default_instance_;
}

DataPackage* DataPackage::default_instance_ = NULL;

DataPackage* DataPackage::New() const {
  return new DataPackage;
}

void DataPackage::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    if (has_vision()) {
      if (vision_ != NULL) vision_->::VisionPackage::Clear();
    }
    if (has_referee()) {
      if (referee_ != NULL) referee_->::SSL_Referee::Clear();
    }
    if (has_control()) {
      if (control_ != NULL) control_->::ControlPackage::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DataPackage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:DataPackage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .VisionPackage vision = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_vision()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_referee;
        break;
      }

      // required .SSL_Referee referee = 2;
      case 2: {
        if (tag == 18) {
         parse_referee:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_referee()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_control;
        break;
      }

      // optional .ControlPackage control = 3;
      case 3: {
        if (tag == 26) {
         parse_control:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_control()));
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
  // @@protoc_insertion_point(parse_success:DataPackage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:DataPackage)
  return false;
#undef DO_
}

void DataPackage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:DataPackage)
  // required .VisionPackage vision = 1;
  if (has_vision()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->vision(), output);
  }

  // required .SSL_Referee referee = 2;
  if (has_referee()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->referee(), output);
  }

  // optional .ControlPackage control = 3;
  if (has_control()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->control(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:DataPackage)
}

::google::protobuf::uint8* DataPackage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:DataPackage)
  // required .VisionPackage vision = 1;
  if (has_vision()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->vision(), target);
  }

  // required .SSL_Referee referee = 2;
  if (has_referee()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->referee(), target);
  }

  // optional .ControlPackage control = 3;
  if (has_control()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->control(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:DataPackage)
  return target;
}

int DataPackage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .VisionPackage vision = 1;
    if (has_vision()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->vision());
    }

    // required .SSL_Referee referee = 2;
    if (has_referee()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->referee());
    }

    // optional .ControlPackage control = 3;
    if (has_control()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->control());
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

void DataPackage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DataPackage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DataPackage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DataPackage::MergeFrom(const DataPackage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_vision()) {
      mutable_vision()->::VisionPackage::MergeFrom(from.vision());
    }
    if (from.has_referee()) {
      mutable_referee()->::SSL_Referee::MergeFrom(from.referee());
    }
    if (from.has_control()) {
      mutable_control()->::ControlPackage::MergeFrom(from.control());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DataPackage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DataPackage::CopyFrom(const DataPackage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DataPackage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_vision()) {
    if (!this->vision().IsInitialized()) return false;
  }
  if (has_referee()) {
    if (!this->referee().IsInitialized()) return false;
  }
  if (has_control()) {
    if (!this->control().IsInitialized()) return false;
  }
  return true;
}

void DataPackage::Swap(DataPackage* other) {
  if (other != this) {
    std::swap(vision_, other->vision_);
    std::swap(referee_, other->referee_);
    std::swap(control_, other->control_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DataPackage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DataPackage_descriptor_;
  metadata.reflection = DataPackage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
