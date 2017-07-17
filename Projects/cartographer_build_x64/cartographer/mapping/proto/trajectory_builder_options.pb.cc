// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/trajectory_builder_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/trajectory_builder_options.pb.h"

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

namespace cartographer {
namespace mapping {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* TrajectoryBuilderOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TrajectoryBuilderOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/proto/trajectory_builder_options.proto");
  GOOGLE_CHECK(file != NULL);
  TrajectoryBuilderOptions_descriptor_ = file->message_type(0);
  static const int TrajectoryBuilderOptions_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrajectoryBuilderOptions, trajectory_builder_2d_options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrajectoryBuilderOptions, trajectory_builder_3d_options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrajectoryBuilderOptions, pure_localization_),
  };
  TrajectoryBuilderOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TrajectoryBuilderOptions_descriptor_,
      TrajectoryBuilderOptions::default_instance_,
      TrajectoryBuilderOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrajectoryBuilderOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrajectoryBuilderOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TrajectoryBuilderOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TrajectoryBuilderOptions_descriptor_, &TrajectoryBuilderOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto() {
  delete TrajectoryBuilderOptions::default_instance_;
  delete TrajectoryBuilderOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::mapping_2d::proto::protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto();
  ::cartographer::mapping_3d::proto::protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n;cartographer/mapping/proto/trajectory_"
    "builder_options.proto\022\032cartographer.mapp"
    "ing.proto\032Dcartographer/mapping_2d/proto"
    "/local_trajectory_builder_options.proto\032"
    "Dcartographer/mapping_3d/proto/local_tra"
    "jectory_builder_options.proto\"\377\001\n\030Trajec"
    "toryBuilderOptions\022c\n\035trajectory_builder"
    "_2d_options\030\001 \001(\0132<.cartographer.mapping"
    "_2d.proto.LocalTrajectoryBuilderOptions\022"
    "c\n\035trajectory_builder_3d_options\030\002 \001(\0132<"
    ".cartographer.mapping_3d.proto.LocalTraj"
    "ectoryBuilderOptions\022\031\n\021pure_localizatio"
    "n\030\003 \001(\010", 487);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/trajectory_builder_options.proto", &protobuf_RegisterTypes);
  TrajectoryBuilderOptions::default_instance_ = new TrajectoryBuilderOptions();
  TrajectoryBuilderOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int TrajectoryBuilderOptions::kTrajectoryBuilder2DOptionsFieldNumber;
const int TrajectoryBuilderOptions::kTrajectoryBuilder3DOptionsFieldNumber;
const int TrajectoryBuilderOptions::kPureLocalizationFieldNumber;
#endif  // !_MSC_VER

TrajectoryBuilderOptions::TrajectoryBuilderOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TrajectoryBuilderOptions::InitAsDefaultInstance() {
  trajectory_builder_2d_options_ = const_cast< ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions*>(&::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions::default_instance());
  trajectory_builder_3d_options_ = const_cast< ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions*>(&::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions::default_instance());
}

TrajectoryBuilderOptions::TrajectoryBuilderOptions(const TrajectoryBuilderOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TrajectoryBuilderOptions::SharedCtor() {
  _cached_size_ = 0;
  trajectory_builder_2d_options_ = NULL;
  trajectory_builder_3d_options_ = NULL;
  pure_localization_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TrajectoryBuilderOptions::~TrajectoryBuilderOptions() {
  SharedDtor();
}

void TrajectoryBuilderOptions::SharedDtor() {
  if (this != default_instance_) {
    delete trajectory_builder_2d_options_;
    delete trajectory_builder_3d_options_;
  }
}

void TrajectoryBuilderOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TrajectoryBuilderOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TrajectoryBuilderOptions_descriptor_;
}

const TrajectoryBuilderOptions& TrajectoryBuilderOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto();
  return *default_instance_;
}

TrajectoryBuilderOptions* TrajectoryBuilderOptions::default_instance_ = NULL;

TrajectoryBuilderOptions* TrajectoryBuilderOptions::New() const {
  return new TrajectoryBuilderOptions;
}

void TrajectoryBuilderOptions::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_trajectory_builder_2d_options()) {
      if (trajectory_builder_2d_options_ != NULL) trajectory_builder_2d_options_->::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions::Clear();
    }
    if (has_trajectory_builder_3d_options()) {
      if (trajectory_builder_3d_options_ != NULL) trajectory_builder_3d_options_->::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions::Clear();
    }
    pure_localization_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TrajectoryBuilderOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .cartographer.mapping_2d.proto.LocalTrajectoryBuilderOptions trajectory_builder_2d_options = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_trajectory_builder_2d_options()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_trajectory_builder_3d_options;
        break;
      }

      // optional .cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions trajectory_builder_3d_options = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_trajectory_builder_3d_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_trajectory_builder_3d_options()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_pure_localization;
        break;
      }

      // optional bool pure_localization = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_pure_localization:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &pure_localization_)));
          set_has_pure_localization();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void TrajectoryBuilderOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .cartographer.mapping_2d.proto.LocalTrajectoryBuilderOptions trajectory_builder_2d_options = 1;
  if (has_trajectory_builder_2d_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->trajectory_builder_2d_options(), output);
  }

  // optional .cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions trajectory_builder_3d_options = 2;
  if (has_trajectory_builder_3d_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->trajectory_builder_3d_options(), output);
  }

  // optional bool pure_localization = 3;
  if (has_pure_localization()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->pure_localization(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TrajectoryBuilderOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .cartographer.mapping_2d.proto.LocalTrajectoryBuilderOptions trajectory_builder_2d_options = 1;
  if (has_trajectory_builder_2d_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->trajectory_builder_2d_options(), target);
  }

  // optional .cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions trajectory_builder_3d_options = 2;
  if (has_trajectory_builder_3d_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->trajectory_builder_3d_options(), target);
  }

  // optional bool pure_localization = 3;
  if (has_pure_localization()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->pure_localization(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TrajectoryBuilderOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .cartographer.mapping_2d.proto.LocalTrajectoryBuilderOptions trajectory_builder_2d_options = 1;
    if (has_trajectory_builder_2d_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->trajectory_builder_2d_options());
    }

    // optional .cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions trajectory_builder_3d_options = 2;
    if (has_trajectory_builder_3d_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->trajectory_builder_3d_options());
    }

    // optional bool pure_localization = 3;
    if (has_pure_localization()) {
      total_size += 1 + 1;
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

void TrajectoryBuilderOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TrajectoryBuilderOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TrajectoryBuilderOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TrajectoryBuilderOptions::MergeFrom(const TrajectoryBuilderOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_trajectory_builder_2d_options()) {
      mutable_trajectory_builder_2d_options()->::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions::MergeFrom(from.trajectory_builder_2d_options());
    }
    if (from.has_trajectory_builder_3d_options()) {
      mutable_trajectory_builder_3d_options()->::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions::MergeFrom(from.trajectory_builder_3d_options());
    }
    if (from.has_pure_localization()) {
      set_pure_localization(from.pure_localization());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TrajectoryBuilderOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TrajectoryBuilderOptions::CopyFrom(const TrajectoryBuilderOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrajectoryBuilderOptions::IsInitialized() const {

  return true;
}

void TrajectoryBuilderOptions::Swap(TrajectoryBuilderOptions* other) {
  if (other != this) {
    std::swap(trajectory_builder_2d_options_, other->trajectory_builder_2d_options_);
    std::swap(trajectory_builder_3d_options_, other->trajectory_builder_3d_options_);
    std::swap(pure_localization_, other->pure_localization_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TrajectoryBuilderOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TrajectoryBuilderOptions_descriptor_;
  metadata.reflection = TrajectoryBuilderOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
