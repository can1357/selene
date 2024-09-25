#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 255>), "_DOT11_SUPPORTED_DATA_RATES_VALUE_V2.ucSupportedTxDataRatesValue", uc_supported_tx_data_rates_value, 0x0, 0xf8, true, 0x1b86a82c73238e4f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 255>), "_DOT11_SUPPORTED_DATA_RATES_VALUE_V2.ucSupportedRxDataRatesValue", uc_supported_rx_data_rates_value, 0x7f8, 0xf8, true, 0xff0c6e23f4cc75d8)
#else
#define _m00
#define _m01
#endif