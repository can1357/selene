#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockBindings@BindEngine@Ndis$ndis.sys", 0x0, 0x0, false, 0x404ad104b744dc21)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnlockBindings@BindEngine@Ndis$ndis.sys", 0x0, 0x0, false, 0x524ab885bdd56b1d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BeginBindOperation@BindEngine@Ndis$ndis.sys", 0x1229c8, 0x0, true, 0xb1b9e11daa0d2071)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ApplyBindChanges@BindEngine@Ndis$ndis.sys", 0xfde40, 0x0, true, 0x201dce63dbd375e0)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ApplyRules@BindEngine@Ndis$ndis.sys", 0x104edc, 0x0, true, 0xac32b9b858d2ff4f)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BeginPolicyUpdates@BindEngine@Ndis$ndis.sys", 0xfdbe0, 0x0, true, 0x1d2bc452907461b8)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DispatchPendingWork@BindEngine@Ndis$ndis.sys", 0xfddb8, 0x0, true, 0xd8ffbb835efcbf)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EndBindOperation@BindEngine@Ndis$ndis.sys", 0x1054d4, 0x0, true, 0xc4ea561c360ddd7e)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EndPolicyUpdates@BindEngine@Ndis$ndis.sys", 0xfb8cc, 0x0, true, 0x3e0f6ab18a4cffdc)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCurrentLink@BindEngine@Ndis$ndis.sys", 0xf8968, 0x0, true, 0x76d947f1e25f9067)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@BindEngine@Ndis$ndis.sys", 0xf8974, 0x0, true, 0xc6043f0df255ca88)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Iterate@BindEngine@Ndis$ndis.sys", 0x1048a4, 0x0, true, 0xe90ada2b16cf9c89)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_NumBindOperationsInProgress@BindEngine@Ndis$ndis.sys", 0xe5fb4, 0x0, true, 0xfe4efe12beb73821)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetDirty@BindEngine@Ndis$ndis.sys", 0x1229d8, 0x0, true, 0x2a1ebe0e61d6011e)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateBindings@BindEngine@Ndis$ndis.sys", 0x104760, 0x0, true, 0x99c0cfef2b1b0346)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateBindingsWorkItem@BindEngine@Ndis$ndis.sys", 0x10af90, 0x0, true, 0x4d7cdd475a9afb12)
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
#define _n4(...) __VA_ARGS__
#define _n5(...) __VA_ARGS__
#endif