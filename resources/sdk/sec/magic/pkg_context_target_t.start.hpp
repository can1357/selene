#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_Target.TargetLength", target_length, 0x0, 0x20, true, 0x3b398277df32593)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgContext_Target.Target", target, 0x40, 0x40, true, 0x24d9f711db292794)
#else
#define _m00
#define _m01
#endif