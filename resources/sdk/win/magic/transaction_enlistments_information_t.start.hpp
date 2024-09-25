#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_ENLISTMENTS_INFORMATION.NumberOfEnlistments", number_of_enlistments, 0x0, 0x20, true, 0x171a683df136820d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::transaction_enlistment_pair_t, 1>), "_TRANSACTION_ENLISTMENTS_INFORMATION.EnlistmentPair", enlistment_pair, 0x20, 0x0, true, 0xbbdaf4e49a26c370)
#else
#define _m00
#define _m01
#endif