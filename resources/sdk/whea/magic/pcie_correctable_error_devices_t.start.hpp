#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(whea_pcie_correctable_error_devices_validbits_t ), "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES.ValidBits", valid_bits, 0x0, 0x0, false, 0x30eebcbaa83ef14f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::pcie_address_t), "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES.Address", address, 0x0, 0x0, false, 0x298709243587c569)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES.Mask", mask, 0x0, 0x0, false, 0x2bf73392de5670ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 32>), "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES.CorrectableErrorCount", correctable_error_count, 0x0, 0x0, false, 0xc9056699c849ea55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif