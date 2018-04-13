// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/pose_graph/proto/optimization_problem_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/pose_graph/proto/optimization_problem_options.pb.h"

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
namespace pose_graph {
namespace proto {
class OptimizationProblemOptionsDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<OptimizationProblemOptions>
     _instance;
} _OptimizationProblemOptions_default_instance_;

namespace protobuf_cartographer_2fmapping_2fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, huber_scale_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, acceleration_weight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, rotation_weight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, consecutive_node_translation_weight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, consecutive_node_rotation_weight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, fixed_frame_pose_translation_weight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, fixed_frame_pose_rotation_weight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, fix_z_in_3d_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, log_solver_summary_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, ceres_solver_options_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(OptimizationProblemOptions)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_OptimizationProblemOptions_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cartographer/mapping/pose_graph/proto/optimization_problem_options.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  ::cartographer::common::proto::protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto::InitDefaults();
  _OptimizationProblemOptions_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_OptimizationProblemOptions_default_instance_);_OptimizationProblemOptions_default_instance_._instance.get_mutable()->ceres_solver_options_ = const_cast< ::cartographer::common::proto::CeresSolverOptions*>(
      ::cartographer::common::proto::CeresSolverOptions::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\nHcartographer/mapping/pose_graph/proto/"
      "optimization_problem_options.proto\022%cart"
      "ographer.mapping.pose_graph.proto\0324carto"
      "grapher/common/proto/ceres_solver_option"
      "s.proto\"\223\003\n\032OptimizationProblemOptions\022\023"
      "\n\013huber_scale\030\001 \001(\001\022\033\n\023acceleration_weig"
      "ht\030\010 \001(\001\022\027\n\017rotation_weight\030\t \001(\001\022+\n#con"
      "secutive_node_translation_weight\030\002 \001(\001\022("
      "\n consecutive_node_rotation_weight\030\003 \001(\001"
      "\022+\n#fixed_frame_pose_translation_weight\030"
      "\013 \001(\001\022(\n fixed_frame_pose_rotation_weigh"
      "t\030\014 \001(\001\022\023\n\013fix_z_in_3d\030\r \001(\010\022\032\n\022log_solv"
      "er_summary\030\005 \001(\010\022K\n\024ceres_solver_options"
      "\030\007 \001(\0132-.cartographer.common.proto.Ceres"
      "SolverOptionsb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 581);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/pose_graph/proto/optimization_problem_options.proto", &protobuf_RegisterTypes);
  ::cartographer::common::proto::protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto::AddDescriptors();
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

}  // namespace protobuf_cartographer_2fmapping_2fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OptimizationProblemOptions::kHuberScaleFieldNumber;
const int OptimizationProblemOptions::kAccelerationWeightFieldNumber;
const int OptimizationProblemOptions::kRotationWeightFieldNumber;
const int OptimizationProblemOptions::kConsecutiveNodeTranslationWeightFieldNumber;
const int OptimizationProblemOptions::kConsecutiveNodeRotationWeightFieldNumber;
const int OptimizationProblemOptions::kFixedFramePoseTranslationWeightFieldNumber;
const int OptimizationProblemOptions::kFixedFramePoseRotationWeightFieldNumber;
const int OptimizationProblemOptions::kFixZIn3DFieldNumber;
const int OptimizationProblemOptions::kLogSolverSummaryFieldNumber;
const int OptimizationProblemOptions::kCeresSolverOptionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OptimizationProblemOptions::OptimizationProblemOptions()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cartographer_2fmapping_2fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
}
OptimizationProblemOptions::OptimizationProblemOptions(const OptimizationProblemOptions& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_ceres_solver_options()) {
    ceres_solver_options_ = new ::cartographer::common::proto::CeresSolverOptions(*from.ceres_solver_options_);
  } else {
    ceres_solver_options_ = NULL;
  }
  ::memcpy(&huber_scale_, &from.huber_scale_,
    static_cast<size_t>(reinterpret_cast<char*>(&fixed_frame_pose_rotation_weight_) -
    reinterpret_cast<char*>(&huber_scale_)) + sizeof(fixed_frame_pose_rotation_weight_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
}

void OptimizationProblemOptions::SharedCtor() {
  ::memset(&ceres_solver_options_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&fixed_frame_pose_rotation_weight_) -
      reinterpret_cast<char*>(&ceres_solver_options_)) + sizeof(fixed_frame_pose_rotation_weight_));
  _cached_size_ = 0;
}

OptimizationProblemOptions::~OptimizationProblemOptions() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  SharedDtor();
}

void OptimizationProblemOptions::SharedDtor() {
  if (this != internal_default_instance()) delete ceres_solver_options_;
}

void OptimizationProblemOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OptimizationProblemOptions::descriptor() {
  protobuf_cartographer_2fmapping_2fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_2fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const OptimizationProblemOptions& OptimizationProblemOptions::default_instance() {
  protobuf_cartographer_2fmapping_2fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto::InitDefaults();
  return *internal_default_instance();
}

OptimizationProblemOptions* OptimizationProblemOptions::New(::google::protobuf::Arena* arena) const {
  OptimizationProblemOptions* n = new OptimizationProblemOptions;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OptimizationProblemOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && ceres_solver_options_ != NULL) {
    delete ceres_solver_options_;
  }
  ceres_solver_options_ = NULL;
  ::memset(&huber_scale_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&fixed_frame_pose_rotation_weight_) -
      reinterpret_cast<char*>(&huber_scale_)) + sizeof(fixed_frame_pose_rotation_weight_));
  _internal_metadata_.Clear();
}

bool OptimizationProblemOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double huber_scale = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &huber_scale_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double consecutive_node_translation_weight = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &consecutive_node_translation_weight_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double consecutive_node_rotation_weight = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &consecutive_node_rotation_weight_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool log_solver_summary = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &log_solver_summary_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ceres_solver_options()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double acceleration_weight = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(65u /* 65 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &acceleration_weight_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double rotation_weight = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(73u /* 73 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &rotation_weight_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double fixed_frame_pose_translation_weight = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(89u /* 89 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &fixed_frame_pose_translation_weight_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double fixed_frame_pose_rotation_weight = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(97u /* 97 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &fixed_frame_pose_rotation_weight_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool fix_z_in_3d = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &fix_z_in_3d_)));
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
  // @@protoc_insertion_point(parse_success:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  return false;
#undef DO_
}

void OptimizationProblemOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double huber_scale = 1;
  if (this->huber_scale() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->huber_scale(), output);
  }

  // double consecutive_node_translation_weight = 2;
  if (this->consecutive_node_translation_weight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->consecutive_node_translation_weight(), output);
  }

  // double consecutive_node_rotation_weight = 3;
  if (this->consecutive_node_rotation_weight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->consecutive_node_rotation_weight(), output);
  }

  // bool log_solver_summary = 5;
  if (this->log_solver_summary() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->log_solver_summary(), output);
  }

  // .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 7;
  if (this->has_ceres_solver_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->ceres_solver_options_, output);
  }

  // double acceleration_weight = 8;
  if (this->acceleration_weight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->acceleration_weight(), output);
  }

  // double rotation_weight = 9;
  if (this->rotation_weight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->rotation_weight(), output);
  }

  // double fixed_frame_pose_translation_weight = 11;
  if (this->fixed_frame_pose_translation_weight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(11, this->fixed_frame_pose_translation_weight(), output);
  }

  // double fixed_frame_pose_rotation_weight = 12;
  if (this->fixed_frame_pose_rotation_weight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(12, this->fixed_frame_pose_rotation_weight(), output);
  }

  // bool fix_z_in_3d = 13;
  if (this->fix_z_in_3d() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(13, this->fix_z_in_3d(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
}

::google::protobuf::uint8* OptimizationProblemOptions::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double huber_scale = 1;
  if (this->huber_scale() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->huber_scale(), target);
  }

  // double consecutive_node_translation_weight = 2;
  if (this->consecutive_node_translation_weight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->consecutive_node_translation_weight(), target);
  }

  // double consecutive_node_rotation_weight = 3;
  if (this->consecutive_node_rotation_weight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->consecutive_node_rotation_weight(), target);
  }

  // bool log_solver_summary = 5;
  if (this->log_solver_summary() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->log_solver_summary(), target);
  }

  // .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 7;
  if (this->has_ceres_solver_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->ceres_solver_options_, deterministic, target);
  }

  // double acceleration_weight = 8;
  if (this->acceleration_weight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->acceleration_weight(), target);
  }

  // double rotation_weight = 9;
  if (this->rotation_weight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->rotation_weight(), target);
  }

  // double fixed_frame_pose_translation_weight = 11;
  if (this->fixed_frame_pose_translation_weight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(11, this->fixed_frame_pose_translation_weight(), target);
  }

  // double fixed_frame_pose_rotation_weight = 12;
  if (this->fixed_frame_pose_rotation_weight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(12, this->fixed_frame_pose_rotation_weight(), target);
  }

  // bool fix_z_in_3d = 13;
  if (this->fix_z_in_3d() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(13, this->fix_z_in_3d(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  return target;
}

size_t OptimizationProblemOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 7;
  if (this->has_ceres_solver_options()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ceres_solver_options_);
  }

  // double huber_scale = 1;
  if (this->huber_scale() != 0) {
    total_size += 1 + 8;
  }

  // double consecutive_node_translation_weight = 2;
  if (this->consecutive_node_translation_weight() != 0) {
    total_size += 1 + 8;
  }

  // double consecutive_node_rotation_weight = 3;
  if (this->consecutive_node_rotation_weight() != 0) {
    total_size += 1 + 8;
  }

  // double acceleration_weight = 8;
  if (this->acceleration_weight() != 0) {
    total_size += 1 + 8;
  }

  // double rotation_weight = 9;
  if (this->rotation_weight() != 0) {
    total_size += 1 + 8;
  }

  // double fixed_frame_pose_translation_weight = 11;
  if (this->fixed_frame_pose_translation_weight() != 0) {
    total_size += 1 + 8;
  }

  // bool fix_z_in_3d = 13;
  if (this->fix_z_in_3d() != 0) {
    total_size += 1 + 1;
  }

  // bool log_solver_summary = 5;
  if (this->log_solver_summary() != 0) {
    total_size += 1 + 1;
  }

  // double fixed_frame_pose_rotation_weight = 12;
  if (this->fixed_frame_pose_rotation_weight() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OptimizationProblemOptions::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const OptimizationProblemOptions* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const OptimizationProblemOptions>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
    MergeFrom(*source);
  }
}

void OptimizationProblemOptions::MergeFrom(const OptimizationProblemOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_ceres_solver_options()) {
    mutable_ceres_solver_options()->::cartographer::common::proto::CeresSolverOptions::MergeFrom(from.ceres_solver_options());
  }
  if (from.huber_scale() != 0) {
    set_huber_scale(from.huber_scale());
  }
  if (from.consecutive_node_translation_weight() != 0) {
    set_consecutive_node_translation_weight(from.consecutive_node_translation_weight());
  }
  if (from.consecutive_node_rotation_weight() != 0) {
    set_consecutive_node_rotation_weight(from.consecutive_node_rotation_weight());
  }
  if (from.acceleration_weight() != 0) {
    set_acceleration_weight(from.acceleration_weight());
  }
  if (from.rotation_weight() != 0) {
    set_rotation_weight(from.rotation_weight());
  }
  if (from.fixed_frame_pose_translation_weight() != 0) {
    set_fixed_frame_pose_translation_weight(from.fixed_frame_pose_translation_weight());
  }
  if (from.fix_z_in_3d() != 0) {
    set_fix_z_in_3d(from.fix_z_in_3d());
  }
  if (from.log_solver_summary() != 0) {
    set_log_solver_summary(from.log_solver_summary());
  }
  if (from.fixed_frame_pose_rotation_weight() != 0) {
    set_fixed_frame_pose_rotation_weight(from.fixed_frame_pose_rotation_weight());
  }
}

void OptimizationProblemOptions::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OptimizationProblemOptions::CopyFrom(const OptimizationProblemOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OptimizationProblemOptions::IsInitialized() const {
  return true;
}

void OptimizationProblemOptions::Swap(OptimizationProblemOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OptimizationProblemOptions::InternalSwap(OptimizationProblemOptions* other) {
  using std::swap;
  swap(ceres_solver_options_, other->ceres_solver_options_);
  swap(huber_scale_, other->huber_scale_);
  swap(consecutive_node_translation_weight_, other->consecutive_node_translation_weight_);
  swap(consecutive_node_rotation_weight_, other->consecutive_node_rotation_weight_);
  swap(acceleration_weight_, other->acceleration_weight_);
  swap(rotation_weight_, other->rotation_weight_);
  swap(fixed_frame_pose_translation_weight_, other->fixed_frame_pose_translation_weight_);
  swap(fix_z_in_3d_, other->fix_z_in_3d_);
  swap(log_solver_summary_, other->log_solver_summary_);
  swap(fixed_frame_pose_rotation_weight_, other->fixed_frame_pose_rotation_weight_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OptimizationProblemOptions::GetMetadata() const {
  protobuf_cartographer_2fmapping_2fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_2fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OptimizationProblemOptions

// double huber_scale = 1;
void OptimizationProblemOptions::clear_huber_scale() {
  huber_scale_ = 0;
}
double OptimizationProblemOptions::huber_scale() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.huber_scale)
  return huber_scale_;
}
void OptimizationProblemOptions::set_huber_scale(double value) {
  
  huber_scale_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.huber_scale)
}

// double acceleration_weight = 8;
void OptimizationProblemOptions::clear_acceleration_weight() {
  acceleration_weight_ = 0;
}
double OptimizationProblemOptions::acceleration_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.acceleration_weight)
  return acceleration_weight_;
}
void OptimizationProblemOptions::set_acceleration_weight(double value) {
  
  acceleration_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.acceleration_weight)
}

// double rotation_weight = 9;
void OptimizationProblemOptions::clear_rotation_weight() {
  rotation_weight_ = 0;
}
double OptimizationProblemOptions::rotation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.rotation_weight)
  return rotation_weight_;
}
void OptimizationProblemOptions::set_rotation_weight(double value) {
  
  rotation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.rotation_weight)
}

// double consecutive_node_translation_weight = 2;
void OptimizationProblemOptions::clear_consecutive_node_translation_weight() {
  consecutive_node_translation_weight_ = 0;
}
double OptimizationProblemOptions::consecutive_node_translation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.consecutive_node_translation_weight)
  return consecutive_node_translation_weight_;
}
void OptimizationProblemOptions::set_consecutive_node_translation_weight(double value) {
  
  consecutive_node_translation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.consecutive_node_translation_weight)
}

// double consecutive_node_rotation_weight = 3;
void OptimizationProblemOptions::clear_consecutive_node_rotation_weight() {
  consecutive_node_rotation_weight_ = 0;
}
double OptimizationProblemOptions::consecutive_node_rotation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.consecutive_node_rotation_weight)
  return consecutive_node_rotation_weight_;
}
void OptimizationProblemOptions::set_consecutive_node_rotation_weight(double value) {
  
  consecutive_node_rotation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.consecutive_node_rotation_weight)
}

// double fixed_frame_pose_translation_weight = 11;
void OptimizationProblemOptions::clear_fixed_frame_pose_translation_weight() {
  fixed_frame_pose_translation_weight_ = 0;
}
double OptimizationProblemOptions::fixed_frame_pose_translation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.fixed_frame_pose_translation_weight)
  return fixed_frame_pose_translation_weight_;
}
void OptimizationProblemOptions::set_fixed_frame_pose_translation_weight(double value) {
  
  fixed_frame_pose_translation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.fixed_frame_pose_translation_weight)
}

// double fixed_frame_pose_rotation_weight = 12;
void OptimizationProblemOptions::clear_fixed_frame_pose_rotation_weight() {
  fixed_frame_pose_rotation_weight_ = 0;
}
double OptimizationProblemOptions::fixed_frame_pose_rotation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.fixed_frame_pose_rotation_weight)
  return fixed_frame_pose_rotation_weight_;
}
void OptimizationProblemOptions::set_fixed_frame_pose_rotation_weight(double value) {
  
  fixed_frame_pose_rotation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.fixed_frame_pose_rotation_weight)
}

// bool fix_z_in_3d = 13;
void OptimizationProblemOptions::clear_fix_z_in_3d() {
  fix_z_in_3d_ = false;
}
bool OptimizationProblemOptions::fix_z_in_3d() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.fix_z_in_3d)
  return fix_z_in_3d_;
}
void OptimizationProblemOptions::set_fix_z_in_3d(bool value) {
  
  fix_z_in_3d_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.fix_z_in_3d)
}

// bool log_solver_summary = 5;
void OptimizationProblemOptions::clear_log_solver_summary() {
  log_solver_summary_ = false;
}
bool OptimizationProblemOptions::log_solver_summary() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.log_solver_summary)
  return log_solver_summary_;
}
void OptimizationProblemOptions::set_log_solver_summary(bool value) {
  
  log_solver_summary_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.log_solver_summary)
}

// .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 7;
bool OptimizationProblemOptions::has_ceres_solver_options() const {
  return this != internal_default_instance() && ceres_solver_options_ != NULL;
}
void OptimizationProblemOptions::clear_ceres_solver_options() {
  if (GetArenaNoVirtual() == NULL && ceres_solver_options_ != NULL) delete ceres_solver_options_;
  ceres_solver_options_ = NULL;
}
const ::cartographer::common::proto::CeresSolverOptions& OptimizationProblemOptions::ceres_solver_options() const {
  const ::cartographer::common::proto::CeresSolverOptions* p = ceres_solver_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.ceres_solver_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::common::proto::CeresSolverOptions*>(
      &::cartographer::common::proto::_CeresSolverOptions_default_instance_);
}
::cartographer::common::proto::CeresSolverOptions* OptimizationProblemOptions::mutable_ceres_solver_options() {
  
  if (ceres_solver_options_ == NULL) {
    ceres_solver_options_ = new ::cartographer::common::proto::CeresSolverOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.ceres_solver_options)
  return ceres_solver_options_;
}
::cartographer::common::proto::CeresSolverOptions* OptimizationProblemOptions::release_ceres_solver_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.ceres_solver_options)
  
  ::cartographer::common::proto::CeresSolverOptions* temp = ceres_solver_options_;
  ceres_solver_options_ = NULL;
  return temp;
}
void OptimizationProblemOptions::set_allocated_ceres_solver_options(::cartographer::common::proto::CeresSolverOptions* ceres_solver_options) {
  delete ceres_solver_options_;
  ceres_solver_options_ = ceres_solver_options;
  if (ceres_solver_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.pose_graph.proto.OptimizationProblemOptions.ceres_solver_options)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace pose_graph
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
