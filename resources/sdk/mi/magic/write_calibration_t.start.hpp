#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_WRITE_CALIBRATION.MaximumNumberProcessors", maximum_number_processors, 0x0, 0x20, true, 0x42da69e6af2a464c)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_MI_WRITE_CALIBRATION.OptimalWriteType", optimal_write_type, 0x20, 0x20, true, 0x9d1152f4b2299c4d, 0, uint32_t,uint8_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_WRITE_CALIBRATION.PerProcessorNumberOfBytes", per_processor_number_of_bytes, 0x40, 0x40, true, 0x1edd0a08ab6f081c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_MI_WRITE_CALIBRATION.OptimalWriteProcessors", optimal_write_processors, 0x80, 0x40, true, 0x8436d7e28c0324ac)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::write_modes_t*), "_MI_WRITE_CALIBRATION.RawTimeStamps", raw_time_stamps, 0xc0, 0x40, true, 0xd59469ee40423326)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_WRITE_CALIBRATION.CalibrationCompleted", calibration_completed, 0x0, 0x0, false, 0x699c469368760dbe)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MI_WRITE_CALIBRATION.CalibrationFinal", calibration_final, 0x0, 0x0, false, 0xcc75e0880a8a1100)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::write_modes_t*), "_MI_WRITE_CALIBRATION.PureZeroing", pure_zeroing, 0x0, 0x0, false, 0x46e2338968a6ae22)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif