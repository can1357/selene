#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_DXGKARG_SETUPPRIORITYBANDS.gracePeriodForBand", grace_period_for_band, 0x0, 0x0, true, 0xe916e583a0494ad)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_DXGKARG_SETUPPRIORITYBANDS.processQuantumForBand", process_quantum_for_band, 0x100, 0x0, true, 0x6cd7229ad610ca79)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_DXGKARG_SETUPPRIORITYBANDS.processGracePeriodForBand", process_grace_period_for_band, 0x200, 0x0, true, 0x6667612b670ce64c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETUPPRIORITYBANDS.targetNormalBandPercentage", target_normal_band_percentage, 0x300, 0x20, true, 0xb14da5a0ab16523b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif