// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/sparse_pose_graph.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/mapping/proto/trajectory.pb.h"
#include "cartographer/transform/proto/transform.pb.h"
// @@protoc_insertion_point(includes)
namespace cartographer {
namespace mapping {
namespace proto {
class NodeId;
class NodeIdDefaultTypeInternal;
extern NodeIdDefaultTypeInternal _NodeId_default_instance_;
class SparsePoseGraph;
class SparsePoseGraphDefaultTypeInternal;
extern SparsePoseGraphDefaultTypeInternal _SparsePoseGraph_default_instance_;
class SparsePoseGraph_Constraint;
class SparsePoseGraph_ConstraintDefaultTypeInternal;
extern SparsePoseGraph_ConstraintDefaultTypeInternal _SparsePoseGraph_Constraint_default_instance_;
class SubmapId;
class SubmapIdDefaultTypeInternal;
extern SubmapIdDefaultTypeInternal _SubmapId_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

namespace cartographer {
namespace mapping {
namespace proto {

namespace protobuf_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto

enum SparsePoseGraph_Constraint_Tag {
  SparsePoseGraph_Constraint_Tag_INTRA_SUBMAP = 0,
  SparsePoseGraph_Constraint_Tag_INTER_SUBMAP = 1
};
bool SparsePoseGraph_Constraint_Tag_IsValid(int value);
const SparsePoseGraph_Constraint_Tag SparsePoseGraph_Constraint_Tag_Tag_MIN = SparsePoseGraph_Constraint_Tag_INTRA_SUBMAP;
const SparsePoseGraph_Constraint_Tag SparsePoseGraph_Constraint_Tag_Tag_MAX = SparsePoseGraph_Constraint_Tag_INTER_SUBMAP;
const int SparsePoseGraph_Constraint_Tag_Tag_ARRAYSIZE = SparsePoseGraph_Constraint_Tag_Tag_MAX + 1;

const ::google::protobuf::EnumDescriptor* SparsePoseGraph_Constraint_Tag_descriptor();
inline const ::std::string& SparsePoseGraph_Constraint_Tag_Name(SparsePoseGraph_Constraint_Tag value) {
  return ::google::protobuf::internal::NameOfEnum(
    SparsePoseGraph_Constraint_Tag_descriptor(), value);
}
inline bool SparsePoseGraph_Constraint_Tag_Parse(
    const ::std::string& name, SparsePoseGraph_Constraint_Tag* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SparsePoseGraph_Constraint_Tag>(
    SparsePoseGraph_Constraint_Tag_descriptor(), name, value);
}
// ===================================================================

class SubmapId : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.SubmapId) */ {
 public:
  SubmapId();
  virtual ~SubmapId();

  SubmapId(const SubmapId& from);

  inline SubmapId& operator=(const SubmapId& from) {
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
  static const SubmapId& default_instance();

  static inline const SubmapId* internal_default_instance() {
    return reinterpret_cast<const SubmapId*>(
               &_SubmapId_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SubmapId* other);

  // implements Message ----------------------------------------------

  inline SubmapId* New() const PROTOBUF_FINAL { return New(NULL); }

  SubmapId* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SubmapId& from);
  void MergeFrom(const SubmapId& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SubmapId* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 trajectory_id = 1;
  bool has_trajectory_id() const;
  void clear_trajectory_id();
  static const int kTrajectoryIdFieldNumber = 1;
  ::google::protobuf::int32 trajectory_id() const;
  void set_trajectory_id(::google::protobuf::int32 value);

  // optional int32 submap_index = 2;
  bool has_submap_index() const;
  void clear_submap_index();
  static const int kSubmapIndexFieldNumber = 2;
  ::google::protobuf::int32 submap_index() const;
  void set_submap_index(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.SubmapId)
 private:
  void set_has_trajectory_id();
  void clear_has_trajectory_id();
  void set_has_submap_index();
  void clear_has_submap_index();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 trajectory_id_;
  ::google::protobuf::int32 submap_index_;
  friend struct protobuf_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class NodeId : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.NodeId) */ {
 public:
  NodeId();
  virtual ~NodeId();

  NodeId(const NodeId& from);

  inline NodeId& operator=(const NodeId& from) {
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
  static const NodeId& default_instance();

  static inline const NodeId* internal_default_instance() {
    return reinterpret_cast<const NodeId*>(
               &_NodeId_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(NodeId* other);

  // implements Message ----------------------------------------------

  inline NodeId* New() const PROTOBUF_FINAL { return New(NULL); }

  NodeId* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const NodeId& from);
  void MergeFrom(const NodeId& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(NodeId* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 trajectory_id = 1;
  bool has_trajectory_id() const;
  void clear_trajectory_id();
  static const int kTrajectoryIdFieldNumber = 1;
  ::google::protobuf::int32 trajectory_id() const;
  void set_trajectory_id(::google::protobuf::int32 value);

  // optional int32 node_index = 2;
  bool has_node_index() const;
  void clear_node_index();
  static const int kNodeIndexFieldNumber = 2;
  ::google::protobuf::int32 node_index() const;
  void set_node_index(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.NodeId)
 private:
  void set_has_trajectory_id();
  void clear_has_trajectory_id();
  void set_has_node_index();
  void clear_has_node_index();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 trajectory_id_;
  ::google::protobuf::int32 node_index_;
  friend struct protobuf_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SparsePoseGraph_Constraint : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.SparsePoseGraph.Constraint) */ {
 public:
  SparsePoseGraph_Constraint();
  virtual ~SparsePoseGraph_Constraint();

  SparsePoseGraph_Constraint(const SparsePoseGraph_Constraint& from);

  inline SparsePoseGraph_Constraint& operator=(const SparsePoseGraph_Constraint& from) {
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
  static const SparsePoseGraph_Constraint& default_instance();

  static inline const SparsePoseGraph_Constraint* internal_default_instance() {
    return reinterpret_cast<const SparsePoseGraph_Constraint*>(
               &_SparsePoseGraph_Constraint_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(SparsePoseGraph_Constraint* other);

  // implements Message ----------------------------------------------

  inline SparsePoseGraph_Constraint* New() const PROTOBUF_FINAL { return New(NULL); }

  SparsePoseGraph_Constraint* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SparsePoseGraph_Constraint& from);
  void MergeFrom(const SparsePoseGraph_Constraint& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SparsePoseGraph_Constraint* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef SparsePoseGraph_Constraint_Tag Tag;
  static const Tag INTRA_SUBMAP =
    SparsePoseGraph_Constraint_Tag_INTRA_SUBMAP;
  static const Tag INTER_SUBMAP =
    SparsePoseGraph_Constraint_Tag_INTER_SUBMAP;
  static inline bool Tag_IsValid(int value) {
    return SparsePoseGraph_Constraint_Tag_IsValid(value);
  }
  static const Tag Tag_MIN =
    SparsePoseGraph_Constraint_Tag_Tag_MIN;
  static const Tag Tag_MAX =
    SparsePoseGraph_Constraint_Tag_Tag_MAX;
  static const int Tag_ARRAYSIZE =
    SparsePoseGraph_Constraint_Tag_Tag_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Tag_descriptor() {
    return SparsePoseGraph_Constraint_Tag_descriptor();
  }
  static inline const ::std::string& Tag_Name(Tag value) {
    return SparsePoseGraph_Constraint_Tag_Name(value);
  }
  static inline bool Tag_Parse(const ::std::string& name,
      Tag* value) {
    return SparsePoseGraph_Constraint_Tag_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .cartographer.mapping.proto.SubmapId submap_id = 1;
  bool has_submap_id() const;
  void clear_submap_id();
  static const int kSubmapIdFieldNumber = 1;
  const ::cartographer::mapping::proto::SubmapId& submap_id() const;
  ::cartographer::mapping::proto::SubmapId* mutable_submap_id();
  ::cartographer::mapping::proto::SubmapId* release_submap_id();
  void set_allocated_submap_id(::cartographer::mapping::proto::SubmapId* submap_id);

  // optional .cartographer.mapping.proto.NodeId node_id = 2;
  bool has_node_id() const;
  void clear_node_id();
  static const int kNodeIdFieldNumber = 2;
  const ::cartographer::mapping::proto::NodeId& node_id() const;
  ::cartographer::mapping::proto::NodeId* mutable_node_id();
  ::cartographer::mapping::proto::NodeId* release_node_id();
  void set_allocated_node_id(::cartographer::mapping::proto::NodeId* node_id);

  // optional .cartographer.transform.proto.Rigid3d relative_pose = 3;
  bool has_relative_pose() const;
  void clear_relative_pose();
  static const int kRelativePoseFieldNumber = 3;
  const ::cartographer::transform::proto::Rigid3d& relative_pose() const;
  ::cartographer::transform::proto::Rigid3d* mutable_relative_pose();
  ::cartographer::transform::proto::Rigid3d* release_relative_pose();
  void set_allocated_relative_pose(::cartographer::transform::proto::Rigid3d* relative_pose);

  // optional double translation_weight = 6;
  bool has_translation_weight() const;
  void clear_translation_weight();
  static const int kTranslationWeightFieldNumber = 6;
  double translation_weight() const;
  void set_translation_weight(double value);

  // optional double rotation_weight = 7;
  bool has_rotation_weight() const;
  void clear_rotation_weight();
  static const int kRotationWeightFieldNumber = 7;
  double rotation_weight() const;
  void set_rotation_weight(double value);

  // optional .cartographer.mapping.proto.SparsePoseGraph.Constraint.Tag tag = 5;
  bool has_tag() const;
  void clear_tag();
  static const int kTagFieldNumber = 5;
  ::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag tag() const;
  void set_tag(::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.SparsePoseGraph.Constraint)
 private:
  void set_has_submap_id();
  void clear_has_submap_id();
  void set_has_node_id();
  void clear_has_node_id();
  void set_has_relative_pose();
  void clear_has_relative_pose();
  void set_has_translation_weight();
  void clear_has_translation_weight();
  void set_has_rotation_weight();
  void clear_has_rotation_weight();
  void set_has_tag();
  void clear_has_tag();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::cartographer::mapping::proto::SubmapId* submap_id_;
  ::cartographer::mapping::proto::NodeId* node_id_;
  ::cartographer::transform::proto::Rigid3d* relative_pose_;
  double translation_weight_;
  double rotation_weight_;
  int tag_;
  friend struct protobuf_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SparsePoseGraph : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.SparsePoseGraph) */ {
 public:
  SparsePoseGraph();
  virtual ~SparsePoseGraph();

  SparsePoseGraph(const SparsePoseGraph& from);

  inline SparsePoseGraph& operator=(const SparsePoseGraph& from) {
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
  static const SparsePoseGraph& default_instance();

  static inline const SparsePoseGraph* internal_default_instance() {
    return reinterpret_cast<const SparsePoseGraph*>(
               &_SparsePoseGraph_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(SparsePoseGraph* other);

  // implements Message ----------------------------------------------

  inline SparsePoseGraph* New() const PROTOBUF_FINAL { return New(NULL); }

  SparsePoseGraph* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SparsePoseGraph& from);
  void MergeFrom(const SparsePoseGraph& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SparsePoseGraph* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef SparsePoseGraph_Constraint Constraint;

  // accessors -------------------------------------------------------

  // repeated .cartographer.mapping.proto.SparsePoseGraph.Constraint constraint = 2;
  int constraint_size() const;
  void clear_constraint();
  static const int kConstraintFieldNumber = 2;
  const ::cartographer::mapping::proto::SparsePoseGraph_Constraint& constraint(int index) const;
  ::cartographer::mapping::proto::SparsePoseGraph_Constraint* mutable_constraint(int index);
  ::cartographer::mapping::proto::SparsePoseGraph_Constraint* add_constraint();
  ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::SparsePoseGraph_Constraint >*
      mutable_constraint();
  const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::SparsePoseGraph_Constraint >&
      constraint() const;

  // repeated .cartographer.mapping.proto.Trajectory trajectory = 4;
  int trajectory_size() const;
  void clear_trajectory();
  static const int kTrajectoryFieldNumber = 4;
  const ::cartographer::mapping::proto::Trajectory& trajectory(int index) const;
  ::cartographer::mapping::proto::Trajectory* mutable_trajectory(int index);
  ::cartographer::mapping::proto::Trajectory* add_trajectory();
  ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory >*
      mutable_trajectory();
  const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory >&
      trajectory() const;

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.SparsePoseGraph)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::SparsePoseGraph_Constraint > constraint_;
  ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory > trajectory_;
  friend struct protobuf_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SubmapId

// optional int32 trajectory_id = 1;
inline bool SubmapId::has_trajectory_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SubmapId::set_has_trajectory_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SubmapId::clear_has_trajectory_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SubmapId::clear_trajectory_id() {
  trajectory_id_ = 0;
  clear_has_trajectory_id();
}
inline ::google::protobuf::int32 SubmapId::trajectory_id() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapId.trajectory_id)
  return trajectory_id_;
}
inline void SubmapId::set_trajectory_id(::google::protobuf::int32 value) {
  set_has_trajectory_id();
  trajectory_id_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapId.trajectory_id)
}

// optional int32 submap_index = 2;
inline bool SubmapId::has_submap_index() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SubmapId::set_has_submap_index() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SubmapId::clear_has_submap_index() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SubmapId::clear_submap_index() {
  submap_index_ = 0;
  clear_has_submap_index();
}
inline ::google::protobuf::int32 SubmapId::submap_index() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapId.submap_index)
  return submap_index_;
}
inline void SubmapId::set_submap_index(::google::protobuf::int32 value) {
  set_has_submap_index();
  submap_index_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapId.submap_index)
}

// -------------------------------------------------------------------

// NodeId

// optional int32 trajectory_id = 1;
inline bool NodeId::has_trajectory_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NodeId::set_has_trajectory_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NodeId::clear_has_trajectory_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NodeId::clear_trajectory_id() {
  trajectory_id_ = 0;
  clear_has_trajectory_id();
}
inline ::google::protobuf::int32 NodeId::trajectory_id() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.NodeId.trajectory_id)
  return trajectory_id_;
}
inline void NodeId::set_trajectory_id(::google::protobuf::int32 value) {
  set_has_trajectory_id();
  trajectory_id_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.NodeId.trajectory_id)
}

// optional int32 node_index = 2;
inline bool NodeId::has_node_index() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NodeId::set_has_node_index() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NodeId::clear_has_node_index() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NodeId::clear_node_index() {
  node_index_ = 0;
  clear_has_node_index();
}
inline ::google::protobuf::int32 NodeId::node_index() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.NodeId.node_index)
  return node_index_;
}
inline void NodeId::set_node_index(::google::protobuf::int32 value) {
  set_has_node_index();
  node_index_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.NodeId.node_index)
}

// -------------------------------------------------------------------

// SparsePoseGraph_Constraint

// optional .cartographer.mapping.proto.SubmapId submap_id = 1;
inline bool SparsePoseGraph_Constraint::has_submap_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SparsePoseGraph_Constraint::set_has_submap_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SparsePoseGraph_Constraint::clear_has_submap_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SparsePoseGraph_Constraint::clear_submap_id() {
  if (submap_id_ != NULL) submap_id_->::cartographer::mapping::proto::SubmapId::Clear();
  clear_has_submap_id();
}
inline const ::cartographer::mapping::proto::SubmapId& SparsePoseGraph_Constraint::submap_id() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SparsePoseGraph.Constraint.submap_id)
  return submap_id_ != NULL ? *submap_id_
                         : *::cartographer::mapping::proto::SubmapId::internal_default_instance();
}
inline ::cartographer::mapping::proto::SubmapId* SparsePoseGraph_Constraint::mutable_submap_id() {
  set_has_submap_id();
  if (submap_id_ == NULL) {
    submap_id_ = new ::cartographer::mapping::proto::SubmapId;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.SparsePoseGraph.Constraint.submap_id)
  return submap_id_;
}
inline ::cartographer::mapping::proto::SubmapId* SparsePoseGraph_Constraint::release_submap_id() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.SparsePoseGraph.Constraint.submap_id)
  clear_has_submap_id();
  ::cartographer::mapping::proto::SubmapId* temp = submap_id_;
  submap_id_ = NULL;
  return temp;
}
inline void SparsePoseGraph_Constraint::set_allocated_submap_id(::cartographer::mapping::proto::SubmapId* submap_id) {
  delete submap_id_;
  submap_id_ = submap_id;
  if (submap_id) {
    set_has_submap_id();
  } else {
    clear_has_submap_id();
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.SparsePoseGraph.Constraint.submap_id)
}

// optional .cartographer.mapping.proto.NodeId node_id = 2;
inline bool SparsePoseGraph_Constraint::has_node_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SparsePoseGraph_Constraint::set_has_node_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SparsePoseGraph_Constraint::clear_has_node_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SparsePoseGraph_Constraint::clear_node_id() {
  if (node_id_ != NULL) node_id_->::cartographer::mapping::proto::NodeId::Clear();
  clear_has_node_id();
}
inline const ::cartographer::mapping::proto::NodeId& SparsePoseGraph_Constraint::node_id() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SparsePoseGraph.Constraint.node_id)
  return node_id_ != NULL ? *node_id_
                         : *::cartographer::mapping::proto::NodeId::internal_default_instance();
}
inline ::cartographer::mapping::proto::NodeId* SparsePoseGraph_Constraint::mutable_node_id() {
  set_has_node_id();
  if (node_id_ == NULL) {
    node_id_ = new ::cartographer::mapping::proto::NodeId;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.SparsePoseGraph.Constraint.node_id)
  return node_id_;
}
inline ::cartographer::mapping::proto::NodeId* SparsePoseGraph_Constraint::release_node_id() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.SparsePoseGraph.Constraint.node_id)
  clear_has_node_id();
  ::cartographer::mapping::proto::NodeId* temp = node_id_;
  node_id_ = NULL;
  return temp;
}
inline void SparsePoseGraph_Constraint::set_allocated_node_id(::cartographer::mapping::proto::NodeId* node_id) {
  delete node_id_;
  node_id_ = node_id;
  if (node_id) {
    set_has_node_id();
  } else {
    clear_has_node_id();
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.SparsePoseGraph.Constraint.node_id)
}

// optional .cartographer.transform.proto.Rigid3d relative_pose = 3;
inline bool SparsePoseGraph_Constraint::has_relative_pose() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SparsePoseGraph_Constraint::set_has_relative_pose() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SparsePoseGraph_Constraint::clear_has_relative_pose() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SparsePoseGraph_Constraint::clear_relative_pose() {
  if (relative_pose_ != NULL) relative_pose_->::cartographer::transform::proto::Rigid3d::Clear();
  clear_has_relative_pose();
}
inline const ::cartographer::transform::proto::Rigid3d& SparsePoseGraph_Constraint::relative_pose() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SparsePoseGraph.Constraint.relative_pose)
  return relative_pose_ != NULL ? *relative_pose_
                         : *::cartographer::transform::proto::Rigid3d::internal_default_instance();
}
inline ::cartographer::transform::proto::Rigid3d* SparsePoseGraph_Constraint::mutable_relative_pose() {
  set_has_relative_pose();
  if (relative_pose_ == NULL) {
    relative_pose_ = new ::cartographer::transform::proto::Rigid3d;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.SparsePoseGraph.Constraint.relative_pose)
  return relative_pose_;
}
inline ::cartographer::transform::proto::Rigid3d* SparsePoseGraph_Constraint::release_relative_pose() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.SparsePoseGraph.Constraint.relative_pose)
  clear_has_relative_pose();
  ::cartographer::transform::proto::Rigid3d* temp = relative_pose_;
  relative_pose_ = NULL;
  return temp;
}
inline void SparsePoseGraph_Constraint::set_allocated_relative_pose(::cartographer::transform::proto::Rigid3d* relative_pose) {
  delete relative_pose_;
  relative_pose_ = relative_pose;
  if (relative_pose) {
    set_has_relative_pose();
  } else {
    clear_has_relative_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.SparsePoseGraph.Constraint.relative_pose)
}

// optional double translation_weight = 6;
inline bool SparsePoseGraph_Constraint::has_translation_weight() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SparsePoseGraph_Constraint::set_has_translation_weight() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SparsePoseGraph_Constraint::clear_has_translation_weight() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SparsePoseGraph_Constraint::clear_translation_weight() {
  translation_weight_ = 0;
  clear_has_translation_weight();
}
inline double SparsePoseGraph_Constraint::translation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SparsePoseGraph.Constraint.translation_weight)
  return translation_weight_;
}
inline void SparsePoseGraph_Constraint::set_translation_weight(double value) {
  set_has_translation_weight();
  translation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SparsePoseGraph.Constraint.translation_weight)
}

// optional double rotation_weight = 7;
inline bool SparsePoseGraph_Constraint::has_rotation_weight() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SparsePoseGraph_Constraint::set_has_rotation_weight() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SparsePoseGraph_Constraint::clear_has_rotation_weight() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SparsePoseGraph_Constraint::clear_rotation_weight() {
  rotation_weight_ = 0;
  clear_has_rotation_weight();
}
inline double SparsePoseGraph_Constraint::rotation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SparsePoseGraph.Constraint.rotation_weight)
  return rotation_weight_;
}
inline void SparsePoseGraph_Constraint::set_rotation_weight(double value) {
  set_has_rotation_weight();
  rotation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SparsePoseGraph.Constraint.rotation_weight)
}

// optional .cartographer.mapping.proto.SparsePoseGraph.Constraint.Tag tag = 5;
inline bool SparsePoseGraph_Constraint::has_tag() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SparsePoseGraph_Constraint::set_has_tag() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SparsePoseGraph_Constraint::clear_has_tag() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SparsePoseGraph_Constraint::clear_tag() {
  tag_ = 0;
  clear_has_tag();
}
inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag SparsePoseGraph_Constraint::tag() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SparsePoseGraph.Constraint.tag)
  return static_cast< ::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag >(tag_);
}
inline void SparsePoseGraph_Constraint::set_tag(::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag value) {
  assert(::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag_IsValid(value));
  set_has_tag();
  tag_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SparsePoseGraph.Constraint.tag)
}

// -------------------------------------------------------------------

// SparsePoseGraph

// repeated .cartographer.mapping.proto.SparsePoseGraph.Constraint constraint = 2;
inline int SparsePoseGraph::constraint_size() const {
  return constraint_.size();
}
inline void SparsePoseGraph::clear_constraint() {
  constraint_.Clear();
}
inline const ::cartographer::mapping::proto::SparsePoseGraph_Constraint& SparsePoseGraph::constraint(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SparsePoseGraph.constraint)
  return constraint_.Get(index);
}
inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint* SparsePoseGraph::mutable_constraint(int index) {
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.SparsePoseGraph.constraint)
  return constraint_.Mutable(index);
}
inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint* SparsePoseGraph::add_constraint() {
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.SparsePoseGraph.constraint)
  return constraint_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::SparsePoseGraph_Constraint >*
SparsePoseGraph::mutable_constraint() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.SparsePoseGraph.constraint)
  return &constraint_;
}
inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::SparsePoseGraph_Constraint >&
SparsePoseGraph::constraint() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.SparsePoseGraph.constraint)
  return constraint_;
}

// repeated .cartographer.mapping.proto.Trajectory trajectory = 4;
inline int SparsePoseGraph::trajectory_size() const {
  return trajectory_.size();
}
inline void SparsePoseGraph::clear_trajectory() {
  trajectory_.Clear();
}
inline const ::cartographer::mapping::proto::Trajectory& SparsePoseGraph::trajectory(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SparsePoseGraph.trajectory)
  return trajectory_.Get(index);
}
inline ::cartographer::mapping::proto::Trajectory* SparsePoseGraph::mutable_trajectory(int index) {
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.SparsePoseGraph.trajectory)
  return trajectory_.Mutable(index);
}
inline ::cartographer::mapping::proto::Trajectory* SparsePoseGraph::add_trajectory() {
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.SparsePoseGraph.trajectory)
  return trajectory_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory >*
SparsePoseGraph::mutable_trajectory() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.SparsePoseGraph.trajectory)
  return &trajectory_;
}
inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory >&
SparsePoseGraph::trajectory() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.SparsePoseGraph.trajectory)
  return trajectory_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag>() {
  return ::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto__INCLUDED
