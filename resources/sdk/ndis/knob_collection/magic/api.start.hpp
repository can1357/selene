#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitSingleKnob@KnobCollection$ndis.sys", 0x0, 0x0, false, 0x7c590517ce698313)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitUpdatedKnobValues@KnobCollection$ndis.sys", 0x0, 0x0, false, 0xc90f273f6e330611)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@KnobCollection$ndis.sys", 0x0, 0x0, false, 0x3b1362c888a067cd)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindKnobByName@KnobCollection$ndis.sys", 0x0, 0x0, false, 0x4f35e132196546b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PrepareUpdatedKnobValues@KnobCollection$ndis.sys", 0x0, 0x0, false, 0xaaac1a1a61ae3a16)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadKnobFromStore@KnobCollection$ndis.sys", 0x0, 0x0, false, 0xd4799e337fa60023)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ValidateKnobValue@KnobCollection$ndis.sys", 0x0, 0x0, false, 0x4cc67c775c098715)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif