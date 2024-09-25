#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hv::details_t), "_SYSTEM_HYPERVISOR_DETAIL_INFORMATION.HvVendorAndMaxFunction", hv_vendor_and_max_function, 0x0, 0x80, true, 0x81e96578bb580dd5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hv::details_t), "_SYSTEM_HYPERVISOR_DETAIL_INFORMATION.HypervisorInterface", hypervisor_interface, 0x80, 0x80, true, 0x4d914569755b08a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hv::details_t), "_SYSTEM_HYPERVISOR_DETAIL_INFORMATION.HypervisorVersion", hypervisor_version, 0x100, 0x80, true, 0x5bcedb9dc41e691)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hv::details_t), "_SYSTEM_HYPERVISOR_DETAIL_INFORMATION.HvFeatures", hv_features, 0x180, 0x80, true, 0x55bb07508d875041)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hv::details_t), "_SYSTEM_HYPERVISOR_DETAIL_INFORMATION.HwFeatures", hw_features, 0x200, 0x80, true, 0x1eebf7e1b0610a5a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hv::details_t), "_SYSTEM_HYPERVISOR_DETAIL_INFORMATION.EnlightenmentInfo", enlightenment_info, 0x280, 0x80, true, 0x61b378adcafb3aeb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hv::details_t), "_SYSTEM_HYPERVISOR_DETAIL_INFORMATION.ImplementationLimits", implementation_limits, 0x300, 0x80, true, 0x28b808f8922c3c1c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif