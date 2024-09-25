#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::psm_appstate_registration_t*), "CRpcResolver._psmRegistration", psm_registration, 0x100, 0x40, true, 0x6da2be68e2da338c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CRpcResolver._fLocalRemReleaseFailed", f_local_rem_release_failed, 0x140, 0x20, true, 0xf77f838deb32e8b3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_fast_bh_t*), "CRpcResolver._fbhILocalObjectExporter", fbh_i_local_object_exporter, 0x0, 0x40, true, 0x17e1b691ee98f6e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_fast_bh_t*), "CRpcResolver._fbhIROT", fbh_irot, 0x40, 0x40, true, 0xa3716b46bf69802e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_fast_bh_t*), "CRpcResolver._fbhISCM", fbh_iscm, 0x80, 0x40, true, 0x53cf75315b1c22ab)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_fast_bh_t*), "CRpcResolver._fbhIMachineActivatorControl", fbh_i_machine_activator_control, 0xc0, 0x40, true, 0xc717c8b6b66d2173)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif