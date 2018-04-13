// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/3d/proto/submaps_options_3d.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/3d/proto/submaps_options_3d.pb.h"

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

namespace cartographer {
namespace mapping {
namespace proto {
class SubmapsOptions3DDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<SubmapsOptions3D>
     _instance;
} _SubmapsOptions3D_default_instance_;

namespace protobuf_cartographer_2fmapping_2f3d_2fproto_2fsubmaps_5foptions_5f3d_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions3D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions3D, high_resolution_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions3D, high_resolution_max_range_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions3D, low_resolution_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions3D, num_range_data_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions3D, range_data_inserter_options_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(SubmapsOptions3D)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_SubmapsOptions3D_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cartographer/mapping/3d/proto/submaps_options_3d.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::cartographer::mapping::proto::protobuf_cartographer_2fmapping_2f3d_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto::InitDefaults();
  _SubmapsOptions3D_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_SubmapsOptions3D_default_instance_);_SubmapsOptions3D_default_instance_._instance.get_mutable()->range_data_inserter_options_ = const_cast< ::cartographer::mapping::proto::RangeDataInserterOptions3D*>(
      ::cartographer::mapping::proto::RangeDataInserterOptions3D::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n6cartographer/mapping/3d/proto/submaps_"
      "options_3d.proto\022\032cartographer.mapping.p"
      "roto\032Bcartographer/mapping/3d/proto/rang"
      "e_data_inserter_options_3d.proto\"\333\001\n\020Sub"
      "mapsOptions3D\022\027\n\017high_resolution\030\001 \001(\001\022!"
      "\n\031high_resolution_max_range\030\004 \001(\001\022\026\n\016low"
      "_resolution\030\005 \001(\001\022\026\n\016num_range_data\030\002 \001("
      "\005\022[\n\033range_data_inserter_options\030\003 \001(\01326"
      ".cartographer.mapping.proto.RangeDataIns"
      "erterOptions3Db\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 382);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/3d/proto/submaps_options_3d.proto", &protobuf_RegisterTypes);
  ::cartographer::mapping::proto::protobuf_cartographer_2fmapping_2f3d_2fproto_2frange_5fdata_5finserter_5foptions_5f3d_2eproto::AddDescriptors();
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_cartographer_2fmapping_2f3d_2fproto_2fsubmaps_5foptions_5f3d_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SubmapsOptions3D::kHighResolutionFieldNumber;
const int SubmapsOptions3D::kHighResolutionMaxRangeFieldNumber;
const int SubmapsOptions3D::kLowResolutionFieldNumber;
const int SubmapsOptions3D::kNumRangeDataFieldNumber;
const int SubmapsOptions3D::kRangeDataInserterOptionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SubmapsOptions3D::SubmapsOptions3D()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cartographer_2fmapping_2f3d_2fproto_2fsubmaps_5foptions_5f3d_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.SubmapsOptions3D)
}
SubmapsOptions3D::SubmapsOptions3D(const SubmapsOptions3D& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_range_data_inserter_options()) {
    range_data_inserter_options_ = new ::cartographer::mapping::proto::RangeDataInserterOptions3D(*from.range_data_inserter_options_);
  } else {
    range_data_inserter_options_ = NULL;
  }
  ::memcpy(&high_resolution_, &from.high_resolution_,
    static_cast<size_t>(reinterpret_cast<char*>(&num_range_data_) -
    reinterpret_cast<char*>(&high_resolution_)) + sizeof(num_range_data_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.SubmapsOptions3D)
}

void SubmapsOptions3D::SharedCtor() {
  ::memset(&range_data_inserter_options_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&num_range_data_) -
      reinterpret_cast<char*>(&range_data_inserter_options_)) + sizeof(num_range_data_));
  _cached_size_ = 0;
}

SubmapsOptions3D::~SubmapsOptions3D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.SubmapsOptions3D)
  SharedDtor();
}

void SubmapsOptions3D::SharedDtor() {
  if (this != internal_default_instance()) delete range_data_inserter_options_;
}

void SubmapsOptions3D::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SubmapsOptions3D::descriptor() {
  protobuf_cartographer_2fmapping_2f3d_2fproto_2fsubmaps_5foptions_5f3d_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_2f3d_2fproto_2fsubmaps_5foptions_5f3d_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SubmapsOptions3D& SubmapsOptions3D::default_instance() {
  protobuf_cartographer_2fmapping_2f3d_2fproto_2fsubmaps_5foptions_5f3d_2eproto::InitDefaults();
  return *internal_default_instance();
}

SubmapsOptions3D* SubmapsOptions3D::New(::google::protobuf::Arena* arena) const {
  SubmapsOptions3D* n = new SubmapsOptions3D;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SubmapsOptions3D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.SubmapsOptions3D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && range_data_inserter_options_ != NULL) {
    delete range_data_inserter_options_;
  }
  range_data_inserter_options_ = NULL;
  ::memset(&high_resolution_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&num_range_data_) -
      reinterpret_cast<char*>(&high_resolution_)) + sizeof(num_range_data_));
  _internal_metadata_.Clear();
}

bool SubmapsOptions3D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.SubmapsOptions3D)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double high_resolution = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &high_resolution_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 num_range_data = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_range_data_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .cartographer.mapping.proto.RangeDataInserterOptions3D range_data_inserter_options = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_range_data_inserter_options()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double high_resolution_max_range = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &high_resolution_max_range_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double low_resolution = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &low_resolution_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.SubmapsOptions3D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.SubmapsOptions3D)
  return false;
#undef DO_
}

void SubmapsOptions3D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.SubmapsOptions3D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double high_resolution = 1;
  if (this->high_resolution() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->high_resolution(), output);
  }

  // int32 num_range_data = 2;
  if (this->num_range_data() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->num_range_data(), output);
  }

  // .cartographer.mapping.proto.RangeDataInserterOptions3D range_data_inserter_options = 3;
  if (this->has_range_data_inserter_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->range_data_inserter_options_, output);
  }

  // double high_resolution_max_range = 4;
  if (this->high_resolution_max_range() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->high_resolution_max_range(), output);
  }

  // double low_resolution = 5;
  if (this->low_resolution() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->low_resolution(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.SubmapsOptions3D)
}

::google::protobuf::uint8* SubmapsOptions3D::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.SubmapsOptions3D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double high_resolution = 1;
  if (this->high_resolution() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->high_resolution(), target);
  }

  // int32 num_range_data = 2;
  if (this->num_range_data() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->num_range_data(), target);
  }

  // .cartographer.mapping.proto.RangeDataInserterOptions3D range_data_inserter_options = 3;
  if (this->has_range_data_inserter_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->range_data_inserter_options_, deterministic, target);
  }

  // double high_resolution_max_range = 4;
  if (this->high_resolution_max_range() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->high_resolution_max_range(), target);
  }

  // double low_resolution = 5;
  if (this->low_resolution() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->low_resolution(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.SubmapsOptions3D)
  return target;
}

size_t SubmapsOptions3D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.SubmapsOptions3D)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .cartographer.mapping.proto.RangeDataInserterOptions3D range_data_inserter_options = 3;
  if (this->has_range_data_inserter_options()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->range_data_inserter_options_);
  }

  // double high_resolution = 1;
  if (this->high_resolution() != 0) {
    total_size += 1 + 8;
  }

  // double high_resolution_max_range = 4;
  if (this->high_resolution_max_range() != 0) {
    total_size += 1 + 8;
  }

  // double low_resolution = 5;
  if (this->low_resolution() != 0) {
    total_size += 1 + 8;
  }

  // int32 num_range_data = 2;
  if (this->num_range_data() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_range_data());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SubmapsOptions3D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.SubmapsOptions3D)
  GOOGLE_DCHECK_NE(&from, this);
  const SubmapsOptions3D* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SubmapsOptions3D>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.SubmapsOptions3D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.SubmapsOptions3D)
    MergeFrom(*source);
  }
}

void SubmapsOptions3D::MergeFrom(const SubmapsOptions3D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.SubmapsOptions3D)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_range_data_inserter_options()) {
    mutable_range_data_inserter_options()->::cartographer::mapping::proto::RangeDataInserterOptions3D::MergeFrom(from.range_data_inserter_options());
  }
  if (from.high_resolution() != 0) {
    set_high_resolution(from.high_resolution());
  }
  if (from.high_resolution_max_range() != 0) {
    set_high_resolution_max_range(from.high_resolution_max_range());
  }
  if (from.low_resolution() != 0) {
    set_low_resolution(from.low_resolution());
  }
  if (from.num_range_data() != 0) {
    set_num_range_data(from.num_range_data());
  }
}

void SubmapsOptions3D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.SubmapsOptions3D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SubmapsOptions3D::CopyFrom(const SubmapsOptions3D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.SubmapsOptions3D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SubmapsOptions3D::IsInitialized() const {
  return true;
}

void SubmapsOptions3D::Swap(SubmapsOptions3D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SubmapsOptions3D::InternalSwap(SubmapsOptions3D* other) {
  using std::swap;
  swap(range_data_inserter_options_, other->range_data_inserter_options_);
  swap(high_resolution_, other->high_resolution_);
  swap(high_resolution_max_range_, other->high_resolution_max_range_);
  swap(low_resolution_, other->low_resolution_);
  swap(num_range_data_, other->num_range_data_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SubmapsOptions3D::GetMetadata() const {
  protobuf_cartographer_2fmapping_2f3d_2fproto_2fsubmaps_5foptions_5f3d_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_2f3d_2fproto_2fsubmaps_5foptions_5f3d_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SubmapsOptions3D

// double high_resolution = 1;
void SubmapsOptions3D::clear_high_resolution() {
  high_resolution_ = 0;
}
double SubmapsOptions3D::high_resolution() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions3D.high_resolution)
  return high_resolution_;
}
void SubmapsOptions3D::set_high_resolution(double value) {
  
  high_resolution_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapsOptions3D.high_resolution)
}

// double high_resolution_max_range = 4;
void SubmapsOptions3D::clear_high_resolution_max_range() {
  high_resolution_max_range_ = 0;
}
double SubmapsOptions3D::high_resolution_max_range() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions3D.high_resolution_max_range)
  return high_resolution_max_range_;
}
void SubmapsOptions3D::set_high_resolution_max_range(double value) {
  
  high_resolution_max_range_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapsOptions3D.high_resolution_max_range)
}

// double low_resolution = 5;
void SubmapsOptions3D::clear_low_resolution() {
  low_resolution_ = 0;
}
double SubmapsOptions3D::low_resolution() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions3D.low_resolution)
  return low_resolution_;
}
void SubmapsOptions3D::set_low_resolution(double value) {
  
  low_resolution_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapsOptions3D.low_resolution)
}

// int32 num_range_data = 2;
void SubmapsOptions3D::clear_num_range_data() {
  num_range_data_ = 0;
}
::google::protobuf::int32 SubmapsOptions3D::num_range_data() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions3D.num_range_data)
  return num_range_data_;
}
void SubmapsOptions3D::set_num_range_data(::google::protobuf::int32 value) {
  
  num_range_data_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapsOptions3D.num_range_data)
}

// .cartographer.mapping.proto.RangeDataInserterOptions3D range_data_inserter_options = 3;
bool SubmapsOptions3D::has_range_data_inserter_options() const {
  return this != internal_default_instance() && range_data_inserter_options_ != NULL;
}
void SubmapsOptions3D::clear_range_data_inserter_options() {
  if (GetArenaNoVirtual() == NULL && range_data_inserter_options_ != NULL) delete range_data_inserter_options_;
  range_data_inserter_options_ = NULL;
}
const ::cartographer::mapping::proto::RangeDataInserterOptions3D& SubmapsOptions3D::range_data_inserter_options() const {
  const ::cartographer::mapping::proto::RangeDataInserterOptions3D* p = range_data_inserter_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions3D.range_data_inserter_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::RangeDataInserterOptions3D*>(
      &::cartographer::mapping::proto::_RangeDataInserterOptions3D_default_instance_);
}
::cartographer::mapping::proto::RangeDataInserterOptions3D* SubmapsOptions3D::mutable_range_data_inserter_options() {
  
  if (range_data_inserter_options_ == NULL) {
    range_data_inserter_options_ = new ::cartographer::mapping::proto::RangeDataInserterOptions3D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.SubmapsOptions3D.range_data_inserter_options)
  return range_data_inserter_options_;
}
::cartographer::mapping::proto::RangeDataInserterOptions3D* SubmapsOptions3D::release_range_data_inserter_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.SubmapsOptions3D.range_data_inserter_options)
  
  ::cartographer::mapping::proto::RangeDataInserterOptions3D* temp = range_data_inserter_options_;
  range_data_inserter_options_ = NULL;
  return temp;
}
void SubmapsOptions3D::set_allocated_range_data_inserter_options(::cartographer::mapping::proto::RangeDataInserterOptions3D* range_data_inserter_options) {
  delete range_data_inserter_options_;
  range_data_inserter_options_ = range_data_inserter_options;
  if (range_data_inserter_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.SubmapsOptions3D.range_data_inserter_options)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
