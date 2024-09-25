#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddRef@CAdapter$dxgkrnl.sys", 0x1b0a0, 0x0, true, 0x622b84974a5c45f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddSignalToContext@CAdapter$dxgkrnl.sys", 0x61ca0, 0x0, true, 0xfa8dd0719c798d7b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddSignalToContextByPtr@CAdapter$dxgkrnl.sys", 0x61d30, 0x0, true, 0x5621eb855f7916e2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddWaitToContext@CAdapter$dxgkrnl.sys", 0x61d50, 0x0, true, 0xfa4e184f6728b288)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocateCascadedSignalingResources@CAdapter$dxgkrnl.sys", 0x61dc0, 0x0, true, 0xe0142e1550fd70a5)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CAdapter$dxgkrnl.sys", 0xcdb0, 0x0, true, 0xb58528541a8b68b1)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateSyncObject@CAdapter$dxgkrnl.sys", 0x62050, 0x0, true, 0xae3a663f286ba6f0)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CAdapter@@IEAA@XZ$dxgkrnl.sys", 0xcc24, 0x0, true, 0xaa2356ab471296a0)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeCascadedSignalingResources@CAdapter$dxgkrnl.sys", 0x620c0, 0x0, true, 0xe8767f1214996505)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetGenerationId@CAdapter$dxgkrnl.sys", 0x1b0c0, 0x0, true, 0xdb716f4d2dd80c23)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CAdapter$dxgkrnl.sys", 0xce7c, 0x0, true, 0x6e8438feb39b4fd9)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@CAdapter$dxgkrnl.sys", 0xcbc0, 0x0, true, 0xbb353a2579055cf1)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SignalTokenSync@CAdapter$dxgkrnl.sys", 0x5800, 0x0, true, 0xeb999fbe41eea675)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateRenderFence@CAdapter$dxgkrnl.sys", 0xd804, 0x0, true, 0x68cf53a69adc4b3a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#endif