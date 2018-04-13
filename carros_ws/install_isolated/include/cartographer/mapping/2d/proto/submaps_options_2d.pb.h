// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/2d/proto/submaps_options_2d.proto

#ifndef PROTOBUF_cartographer_2fmapping_2f2d_2fproto_2fsubmaps_5foptions_5f2d_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2f2d_2fproto_2fsubmaps_5foptions_5f2d_2eproto__INCLUDED

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
#include "cartographer/mapping/2d/proto/range_data_inserter_options_2d.pb.h"
// @@protoc_insertion_point(includes)
namespace cartographer {
namespace mapping {
namespace proto {
class SubmapsOptions2D;
class SubmapsOptions2DDefaultTypeInternal;
extern SubmapsOptions2DDefaultTypeInternal _SubmapsOptions2D_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

namespace cartographer {
namespace mapping {
namespace proto {

namespace protobuf_cartographer_2fmapping_2f2d_2fproto_2fsubmaps_5foptions_5f2d_2eproto {
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
}  // namespace protobuf_cartographer_2fmapping_2f2d_2fproto_2fsubmaps_5foptions_5f2d_2eproto

// ===================================================================

class SubmapsOptions2D : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.SubmapsOptions2D) */ {
 public:
  SubmapsOptions2D();
  virtual ~SubmapsOptions2D();

  SubmapsOptions2D(const SubmapsOptions2D& from);

  inline SubmapsOptions2D& operator=(const SubmapsOptions2D& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SubmapsOptions2D(SubmapsOptions2D&& from) noexcept
    : SubmapsOptions2D() {
    *this = ::std::move(from);
  }

  inline SubmapsOptions2D& operator=(SubmapsOptions2D&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SubmapsOptions2D& default_instance();

  static inline const SubmapsOptions2D* internal_default_instance() {
    return reinterpret_cast<const SubmapsOptions2D*>(
               &_SubmapsOptions2D_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SubmapsOptions2D* other);
  friend void swap(SubmapsOptions2D& a, SubmapsOptions2D& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SubmapsOptions2D* New() const PROTOBUF_FINAL { return New(NULL); }

  SubmapsOptions2D* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SubmapsOptions2D& from);
  void MergeFrom(const SubmapsOptions2D& from);
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
  void InternalSwap(SubmapsOptions2D* other);
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

  // .cartographer.mapping.proto.RangeDataInserterOptions2D range_data_inserter_options = 5;
  bool has_range_data_inserter_options() const;
  void clear_range_data_inserter_options();
  static const int kRangeDataInserterOptionsFieldNumber = 5;
  const ::cartographer::mapping::proto::RangeDataInserterOptions2D& range_data_inserter_options() const;
  ::cartographer::mapping::proto::RangeDataInserterOptions2D* mutable_range_data_inserter_options();
  ::cartographer::mapping::proto::RangeDataInserterOptions2D* release_range_data_inserter_options();
  void set_allocated_range_data_inserter_options(::cartographer::mapping::proto::RangeDataInserterOptions2D* range_data_inserter_options);

  // double resolution = 1;
  void clear_resolution();
  static const int kResolutionFieldNumber = 1;
  double resolution() const;
  void set_resolution(double value);

  // int32 num_range_data = 3;
  void clear_num_range_data();
  static const int kNumRangeDataFieldNumber = 3;
  ::google::protobuf::int32 num_range_data() const;
  void set_num_range_data(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.SubmapsOptions2D)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::mapping::proto::RangeDataInserterOptions2D* range_data_inserter_options_;
  double resolution_;
  ::google::protobuf::int32 num_range_data_;
  mutable int _cached_size_;
  friend struct protobuf_cartographer_2fmapping_2f2d_2fproto_2fsubmaps_5foptions_5f2d_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SubmapsOptions2D

// double resolution = 1;
inline void SubmapsOptions2D::clear_resolution() {
  resolution_ = 0;
}
inline double SubmapsOptions2D::resolution() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions2D.resolution)
  return resolution_;
}
inline void SubmapsOptions2D::set_resolution(double value) {
  
  resolution_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapsOptions2D.resolution)
}

// int32 num_range_data = 3;
inline void SubmapsOptions2D::clear_num_range_data() {
  num_range_data_ = 0;
}
inline ::google::protobuf::int32 SubmapsOptions2D::num_range_data() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions2D.num_range_data)
  return num_range_data_;
}
inline void SubmapsOptions2D::set_num_range_data(::google::protobuf::int32 value) {
  
  num_range_data_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapsOptions2D.num_range_data)
}

// .cartographer.mapping.proto.RangeDataInserterOptions2D range_data_inserter_options = 5;
inline bool SubmapsOptions2D::has_range_data_inserter_options() const {
  return this != internal_default_instance() && range_data_inserter_options_ != NULL;
}
inline void SubmapsOptions2D::clear_range_data_inserter_options() {
  if (GetArenaNoVirtual() == NULL && range_data_inserter_options_ != NULL) delete range_data_inserter_options_;
  range_data_inserter_options_ = NULL;
}
inline const ::cartographer::mapping::proto::RangeDataInserterOptions2D& SubmapsOptions2D::range_data_inserter_options() const {
  const ::cartographer::mapping::proto::RangeDataInserterOptions2D* p = range_data_inserter_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions2D.range_data_inserter_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::RangeDataInserterOptions2D*>(
      &::cartographer::mapping::proto::_RangeDataInserterOptions2D_default_instance_);
}
inline ::cartographer::mapping::proto::RangeDataInserterOptions2D* SubmapsOptions2D::mutable_range_data_inserter_options() {
  
  if (range_data_inserter_options_ == NULL) {
    range_data_inserter_options_ = new ::cartographer::mapping::proto::RangeDataInserterOptions2D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.SubmapsOptions2D.range_data_inserter_options)
  return range_data_inserter_options_;
}
inline ::cartographer::mapping::proto::RangeDataInserterOptions2D* SubmapsOptions2D::release_range_data_inserter_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.SubmapsOptions2D.range_data_inserter_options)
  
  ::cartographer::mapping::proto::RangeDataInserterOptions2D* temp = range_data_inserter_options_;
  range_data_inserter_options_ = NULL;
  return temp;
}
inline void SubmapsOptions2D::set_allocated_range_data_inserter_options(::cartographer::mapping::proto::RangeDataInserterOptions2D* range_data_inserter_options) {
  delete range_data_inserter_options_;
  range_data_inserter_options_ = range_data_inserter_options;
  if (range_data_inserter_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.SubmapsOptions2D.range_data_inserter_options)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2f2d_2fproto_2fsubmaps_5foptions_5f2d_2eproto__INCLUDED
