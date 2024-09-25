#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::rm_resource_request_t), "_RM_RESOURCE_SET_PROPERTIES.ResourcesRequested", resources_requested, 0x0, 0x0, true, 0x8a5480c86ce311ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union win::rm_activity_importance_t), "_RM_RESOURCE_SET_PROPERTIES.Importance", importance, 0x100, 0x20, true, 0x5bf1cca4467677ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RM_RESOURCE_SET_PROPERTIES.OverTargetPriority", over_target_priority, 0x120, 0x8, true, 0xa4fc07a52028330c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::rm_resource_limits_t), "_RM_RESOURCE_SET_PROPERTIES.ResourceLimits", resource_limits, 0x140, 0xc0, true, 0xe4633a188e92d10d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union win::rm_common_policy_flags_t), "_RM_RESOURCE_SET_PROPERTIES.CommonPolicyFlags", common_policy_flags, 0x300, 0x10, true, 0x78654fed43d4159)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union win::rm_appmodel_policy_flags_t), "_RM_RESOURCE_SET_PROPERTIES.AppModelPolicyFlags", app_model_policy_flags, 0x310, 0x8, true, 0xe33d7473bd2b3d50)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RM_RESOURCE_SET_PROPERTIES.ExternalResourcePriorityCount", external_resource_priority_count, 0x320, 0x20, true, 0xc2b6aae2f7f08cec)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif