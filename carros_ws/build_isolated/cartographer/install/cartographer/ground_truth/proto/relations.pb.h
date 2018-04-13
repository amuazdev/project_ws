// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/ground_truth/proto/relations.proto

#ifndef PROTOBUF_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/transform/proto/transform.pb.h"
// @@protoc_insertion_point(includes)
namespace cartographer {
namespace ground_truth {
namespace proto {
class GroundTruth;
class GroundTruthDefaultTypeInternal;
extern GroundTruthDefaultTypeInternal _GroundTruth_default_instance_;
class Relation;
class RelationDefaultTypeInternal;
extern RelationDefaultTypeInternal _Relation_default_instance_;
}  // namespace proto
}  // namespace ground_truth
}  // namespace cartographer

namespace cartographer {
namespace ground_truth {
namespace proto {

namespace protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto

// ===================================================================

class Relation : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.ground_truth.proto.Relation) */ {
 public:
  Relation();
  virtual ~Relation();

  Relation(const Relation& from);

  inline Relation& operator=(const Relation& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Relation(Relation&& from) noexcept
    : Relation() {
    *this = ::std::move(from);
  }

  inline Relation& operator=(Relation&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Relation& default_instance();

  static inline const Relation* internal_default_instance() {
    return reinterpret_cast<const Relation*>(
               &_Relation_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Relation* other);
  friend void swap(Relation& a, Relation& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Relation* New() const PROTOBUF_FINAL { return New(NULL); }

  Relation* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Relation& from);
  void MergeFrom(const Relation& from);
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
  void InternalSwap(Relation* other);
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

  // .cartographer.transform.proto.Rigid3d expected = 3;
  bool has_expected() const;
  void clear_expected();
  static const int kExpectedFieldNumber = 3;
  const ::cartographer::transform::proto::Rigid3d& expected() const;
  ::cartographer::transform::proto::Rigid3d* mutable_expected();
  ::cartographer::transform::proto::Rigid3d* release_expected();
  void set_allocated_expected(::cartographer::transform::proto::Rigid3d* expected);

  // int64 timestamp1 = 1;
  void clear_timestamp1();
  static const int kTimestamp1FieldNumber = 1;
  ::google::protobuf::int64 timestamp1() const;
  void set_timestamp1(::google::protobuf::int64 value);

  // int64 timestamp2 = 2;
  void clear_timestamp2();
  static const int kTimestamp2FieldNumber = 2;
  ::google::protobuf::int64 timestamp2() const;
  void set_timestamp2(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:cartographer.ground_truth.proto.Relation)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::transform::proto::Rigid3d* expected_;
  ::google::protobuf::int64 timestamp1_;
  ::google::protobuf::int64 timestamp2_;
  mutable int _cached_size_;
  friend struct protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GroundTruth : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.ground_truth.proto.GroundTruth) */ {
 public:
  GroundTruth();
  virtual ~GroundTruth();

  GroundTruth(const GroundTruth& from);

  inline GroundTruth& operator=(const GroundTruth& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GroundTruth(GroundTruth&& from) noexcept
    : GroundTruth() {
    *this = ::std::move(from);
  }

  inline GroundTruth& operator=(GroundTruth&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GroundTruth& default_instance();

  static inline const GroundTruth* internal_default_instance() {
    return reinterpret_cast<const GroundTruth*>(
               &_GroundTruth_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(GroundTruth* other);
  friend void swap(GroundTruth& a, GroundTruth& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GroundTruth* New() const PROTOBUF_FINAL { return New(NULL); }

  GroundTruth* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GroundTruth& from);
  void MergeFrom(const GroundTruth& from);
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
  void InternalSwap(GroundTruth* other);
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

  // repeated .cartographer.ground_truth.proto.Relation relation = 1;
  int relation_size() const;
  void clear_relation();
  static const int kRelationFieldNumber = 1;
  const ::cartographer::ground_truth::proto::Relation& relation(int index) const;
  ::cartographer::ground_truth::proto::Relation* mutable_relation(int index);
  ::cartographer::ground_truth::proto::Relation* add_relation();
  ::google::protobuf::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >*
      mutable_relation();
  const ::google::protobuf::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >&
      relation() const;

  // @@protoc_insertion_point(class_scope:cartographer.ground_truth.proto.GroundTruth)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation > relation_;
  mutable int _cached_size_;
  friend struct protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Relation

// int64 timestamp1 = 1;
inline void Relation::clear_timestamp1() {
  timestamp1_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Relation::timestamp1() const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.timestamp1)
  return timestamp1_;
}
inline void Relation::set_timestamp1(::google::protobuf::int64 value) {
  
  timestamp1_ = value;
  // @@protoc_insertion_point(field_set:cartographer.ground_truth.proto.Relation.timestamp1)
}

// int64 timestamp2 = 2;
inline void Relation::clear_timestamp2() {
  timestamp2_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Relation::timestamp2() const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.timestamp2)
  return timestamp2_;
}
inline void Relation::set_timestamp2(::google::protobuf::int64 value) {
  
  timestamp2_ = value;
  // @@protoc_insertion_point(field_set:cartographer.ground_truth.proto.Relation.timestamp2)
}

// .cartographer.transform.proto.Rigid3d expected = 3;
inline bool Relation::has_expected() const {
  return this != internal_default_instance() && expected_ != NULL;
}
inline void Relation::clear_expected() {
  if (GetArenaNoVirtual() == NULL && expected_ != NULL) delete expected_;
  expected_ = NULL;
}
inline const ::cartographer::transform::proto::Rigid3d& Relation::expected() const {
  const ::cartographer::transform::proto::Rigid3d* p = expected_;
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.expected)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::transform::proto::Rigid3d*>(
      &::cartographer::transform::proto::_Rigid3d_default_instance_);
}
inline ::cartographer::transform::proto::Rigid3d* Relation::mutable_expected() {
  
  if (expected_ == NULL) {
    expected_ = new ::cartographer::transform::proto::Rigid3d;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.ground_truth.proto.Relation.expected)
  return expected_;
}
inline ::cartographer::transform::proto::Rigid3d* Relation::release_expected() {
  // @@protoc_insertion_point(field_release:cartographer.ground_truth.proto.Relation.expected)
  
  ::cartographer::transform::proto::Rigid3d* temp = expected_;
  expected_ = NULL;
  return temp;
}
inline void Relation::set_allocated_expected(::cartographer::transform::proto::Rigid3d* expected) {
  delete expected_;
  expected_ = expected;
  if (expected) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.ground_truth.proto.Relation.expected)
}

// -------------------------------------------------------------------

// GroundTruth

// repeated .cartographer.ground_truth.proto.Relation relation = 1;
inline int GroundTruth::relation_size() const {
  return relation_.size();
}
inline void GroundTruth::clear_relation() {
  relation_.Clear();
}
inline const ::cartographer::ground_truth::proto::Relation& GroundTruth::relation(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_.Get(index);
}
inline ::cartographer::ground_truth::proto::Relation* GroundTruth::mutable_relation(int index) {
  // @@protoc_insertion_point(field_mutable:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_.Mutable(index);
}
inline ::cartographer::ground_truth::proto::Relation* GroundTruth::add_relation() {
  // @@protoc_insertion_point(field_add:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >*
GroundTruth::mutable_relation() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.ground_truth.proto.GroundTruth.relation)
  return &relation_;
}
inline const ::google::protobuf::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >&
GroundTruth::relation() const {
  // @@protoc_insertion_point(field_list:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace ground_truth
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto__INCLUDED
