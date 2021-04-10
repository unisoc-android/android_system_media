// This file is autogenerated by hidl-gen
// then manualy edited for retrocompatiblity
// Source: android.hardware.audio.common@5.0
// Root: android.hardware:hardware/interfaces

#ifndef HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_COMMON_V4_0_EXPORTED_CONSTANTS_H_
#define HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_COMMON_V4_0_EXPORTED_CONSTANTS_H_

#ifdef __cplusplus
extern "C" {
#endif

enum {
    AUDIO_IO_HANDLE_NONE = 0,
    AUDIO_MODULE_HANDLE_NONE = 0,
    AUDIO_PORT_HANDLE_NONE = 0,
    AUDIO_PATCH_HANDLE_NONE = 0,
};

typedef enum {
    AUDIO_STREAM_DEFAULT = -1, // (-1)
    AUDIO_STREAM_MIN = 0,
    AUDIO_STREAM_VOICE_CALL = 0,
    AUDIO_STREAM_SYSTEM = 1,
    AUDIO_STREAM_RING = 2,
    AUDIO_STREAM_MUSIC = 3,
    AUDIO_STREAM_ALARM = 4,
    AUDIO_STREAM_NOTIFICATION = 5,
    AUDIO_STREAM_BLUETOOTH_SCO = 6,
    AUDIO_STREAM_ENFORCED_AUDIBLE = 7,
    AUDIO_STREAM_DTMF = 8,
    AUDIO_STREAM_TTS = 9,
    AUDIO_STREAM_ACCESSIBILITY = 10,
#ifndef AUDIO_NO_SYSTEM_DECLARATIONS
    /** For dynamic policy output mixes. Only used by the audio policy */
    AUDIO_STREAM_REROUTING = 11,
    /** For audio flinger tracks volume. Only used by the audioflinger */
    AUDIO_STREAM_PATCH = 12,
#endif // AUDIO_NO_SYSTEM_DECLARATIONS
#ifdef SPRD_CUSTOM_AUDIO_POLICY
    AUDIO_STREAM_FM = 13, /* For fm stream */
#endif
} audio_stream_type_t;

typedef enum {
    AUDIO_SOURCE_DEFAULT = 0,
    AUDIO_SOURCE_MIC = 1,
    AUDIO_SOURCE_VOICE_UPLINK = 2,
    AUDIO_SOURCE_VOICE_DOWNLINK = 3,
    AUDIO_SOURCE_VOICE_CALL = 4,
    AUDIO_SOURCE_CAMCORDER = 5,
    AUDIO_SOURCE_VOICE_RECOGNITION = 6,
    AUDIO_SOURCE_VOICE_COMMUNICATION = 7,
    AUDIO_SOURCE_REMOTE_SUBMIX = 8,
    AUDIO_SOURCE_UNPROCESSED = 9,
    AUDIO_SOURCE_VOICE_PERFORMANCE = 10,
    AUDIO_SOURCE_ECHO_REFERENCE = 1997,
    AUDIO_SOURCE_FM_TUNER = 1998,
#ifndef AUDIO_NO_SYSTEM_DECLARATIONS
    /**
     * A low-priority, preemptible audio source for for background software
     * hotword detection. Same tuning as VOICE_RECOGNITION.
     * Used only internally by the framework.
     */
    AUDIO_SOURCE_HOTWORD = 1999,
#endif // AUDIO_NO_SYSTEM_DECLARATIONS
} audio_source_t;

typedef enum {
    AUDIO_SESSION_OUTPUT_STAGE = -1, // (-1)
    AUDIO_SESSION_OUTPUT_MIX = 0,
    AUDIO_SESSION_ALLOCATE = 0,
    AUDIO_SESSION_NONE = 0,
} audio_session_t;

typedef enum {
    AUDIO_FORMAT_INVALID             = 0xFFFFFFFFu,
    AUDIO_FORMAT_DEFAULT             = 0,
    AUDIO_FORMAT_PCM                 = 0x00000000u,
    AUDIO_FORMAT_MP3                 = 0x01000000u,
    AUDIO_FORMAT_AMR_NB              = 0x02000000u,
    AUDIO_FORMAT_AMR_WB              = 0x03000000u,
    AUDIO_FORMAT_AAC                 = 0x04000000u,
    AUDIO_FORMAT_HE_AAC_V1           = 0x05000000u,
    AUDIO_FORMAT_HE_AAC_V2           = 0x06000000u,
    AUDIO_FORMAT_VORBIS              = 0x07000000u,
    AUDIO_FORMAT_OPUS                = 0x08000000u,
    AUDIO_FORMAT_AC3                 = 0x09000000u,
    AUDIO_FORMAT_E_AC3               = 0x0A000000u,
    AUDIO_FORMAT_DTS                 = 0x0B000000u,
    AUDIO_FORMAT_DTS_HD              = 0x0C000000u,
    AUDIO_FORMAT_IEC61937            = 0x0D000000u,
    AUDIO_FORMAT_DOLBY_TRUEHD        = 0x0E000000u,
    AUDIO_FORMAT_EVRC                = 0x10000000u,
    AUDIO_FORMAT_EVRCB               = 0x11000000u,
    AUDIO_FORMAT_EVRCWB              = 0x12000000u,
    AUDIO_FORMAT_EVRCNW              = 0x13000000u,
    AUDIO_FORMAT_AAC_ADIF            = 0x14000000u,
    AUDIO_FORMAT_WMA                 = 0x15000000u,
    AUDIO_FORMAT_WMA_PRO             = 0x16000000u,
    AUDIO_FORMAT_AMR_WB_PLUS         = 0x17000000u,
    AUDIO_FORMAT_MP2                 = 0x18000000u,
    AUDIO_FORMAT_QCELP               = 0x19000000u,
    AUDIO_FORMAT_DSD                 = 0x1A000000u,
    AUDIO_FORMAT_FLAC                = 0x1B000000u,
    AUDIO_FORMAT_ALAC                = 0x1C000000u,
    AUDIO_FORMAT_APE                 = 0x1D000000u,
    AUDIO_FORMAT_AAC_ADTS            = 0x1E000000u,
    AUDIO_FORMAT_SBC                 = 0x1F000000u,
    AUDIO_FORMAT_APTX                = 0x20000000u,
    AUDIO_FORMAT_APTX_HD             = 0x21000000u,
    AUDIO_FORMAT_AC4                 = 0x22000000u,
    AUDIO_FORMAT_LDAC                = 0x23000000u,
    AUDIO_FORMAT_MAT                 = 0x24000000u,
    AUDIO_FORMAT_AAC_LATM            = 0x25000000u,
    AUDIO_FORMAT_CELT                = 0x26000000u,
    AUDIO_FORMAT_APTX_ADAPTIVE       = 0x27000000u,
    AUDIO_FORMAT_LHDC                = 0x28000000u,
    AUDIO_FORMAT_LHDC_LL             = 0x29000000u,
    AUDIO_FORMAT_APTX_TWSP           = 0x2A000000u,
    AUDIO_FORMAT_MAIN_MASK           = 0xFF000000u,
    AUDIO_FORMAT_SUB_MASK            = 0x00FFFFFFu,

    /* Subformats */
    AUDIO_FORMAT_PCM_SUB_16_BIT        = 0x1u,
    AUDIO_FORMAT_PCM_SUB_8_BIT         = 0x2u,
    AUDIO_FORMAT_PCM_SUB_32_BIT        = 0x3u,
    AUDIO_FORMAT_PCM_SUB_8_24_BIT      = 0x4u,
    AUDIO_FORMAT_PCM_SUB_FLOAT         = 0x5u,
    AUDIO_FORMAT_PCM_SUB_24_BIT_PACKED = 0x6u,

    AUDIO_FORMAT_MP3_SUB_NONE          = 0x0u,

    AUDIO_FORMAT_AMR_SUB_NONE          = 0x0u,

    AUDIO_FORMAT_AAC_SUB_MAIN          = 0x1u,
    AUDIO_FORMAT_AAC_SUB_LC            = 0x2u,
    AUDIO_FORMAT_AAC_SUB_SSR           = 0x4u,
    AUDIO_FORMAT_AAC_SUB_LTP           = 0x8u,
    AUDIO_FORMAT_AAC_SUB_HE_V1         = 0x10u,
    AUDIO_FORMAT_AAC_SUB_SCALABLE      = 0x20u,
    AUDIO_FORMAT_AAC_SUB_ERLC          = 0x40u,
    AUDIO_FORMAT_AAC_SUB_LD            = 0x80u,
    AUDIO_FORMAT_AAC_SUB_HE_V2         = 0x100u,
    AUDIO_FORMAT_AAC_SUB_ELD           = 0x200u,
    AUDIO_FORMAT_AAC_SUB_XHE           = 0x300u,

    AUDIO_FORMAT_VORBIS_SUB_NONE       = 0x0u,

    AUDIO_FORMAT_E_AC3_SUB_JOC         = 0x1u,

    AUDIO_FORMAT_MAT_SUB_1_0           = 0x1u,
    AUDIO_FORMAT_MAT_SUB_2_0           = 0x2u,
    AUDIO_FORMAT_MAT_SUB_2_1           = 0x3u,

    /* Aliases */
    AUDIO_FORMAT_PCM_16_BIT            = 0x1u,        // (PCM | PCM_SUB_16_BIT)
    AUDIO_FORMAT_PCM_8_BIT             = 0x2u,        // (PCM | PCM_SUB_8_BIT)
    AUDIO_FORMAT_PCM_32_BIT            = 0x3u,        // (PCM | PCM_SUB_32_BIT)
    AUDIO_FORMAT_PCM_8_24_BIT          = 0x4u,        // (PCM | PCM_SUB_8_24_BIT)
    AUDIO_FORMAT_PCM_FLOAT             = 0x5u,        // (PCM | PCM_SUB_FLOAT)
    AUDIO_FORMAT_PCM_24_BIT_PACKED     = 0x6u,        // (PCM | PCM_SUB_24_BIT_PACKED)
    AUDIO_FORMAT_AAC_MAIN              = 0x4000001u,  // (AAC | AAC_SUB_MAIN)
    AUDIO_FORMAT_AAC_LC                = 0x4000002u,  // (AAC | AAC_SUB_LC)
    AUDIO_FORMAT_AAC_SSR               = 0x4000004u,  // (AAC | AAC_SUB_SSR)
    AUDIO_FORMAT_AAC_LTP               = 0x4000008u,  // (AAC | AAC_SUB_LTP)
    AUDIO_FORMAT_AAC_HE_V1             = 0x4000010u,  // (AAC | AAC_SUB_HE_V1)
    AUDIO_FORMAT_AAC_SCALABLE          = 0x4000020u,  // (AAC | AAC_SUB_SCALABLE)
    AUDIO_FORMAT_AAC_ERLC              = 0x4000040u,  // (AAC | AAC_SUB_ERLC)
    AUDIO_FORMAT_AAC_LD                = 0x4000080u,  // (AAC | AAC_SUB_LD)
    AUDIO_FORMAT_AAC_HE_V2             = 0x4000100u,  // (AAC | AAC_SUB_HE_V2)
    AUDIO_FORMAT_AAC_ELD               = 0x4000200u,  // (AAC | AAC_SUB_ELD)
    AUDIO_FORMAT_AAC_XHE               = 0x4000300u,  // (AAC | AAC_SUB_XHE)
    AUDIO_FORMAT_AAC_ADTS_MAIN         = 0x1e000001u, // (AAC_ADTS | AAC_SUB_MAIN)
    AUDIO_FORMAT_AAC_ADTS_LC           = 0x1e000002u, // (AAC_ADTS | AAC_SUB_LC)
    AUDIO_FORMAT_AAC_ADTS_SSR          = 0x1e000004u, // (AAC_ADTS | AAC_SUB_SSR)
    AUDIO_FORMAT_AAC_ADTS_LTP          = 0x1e000008u, // (AAC_ADTS | AAC_SUB_LTP)
    AUDIO_FORMAT_AAC_ADTS_HE_V1        = 0x1e000010u, // (AAC_ADTS | AAC_SUB_HE_V1)
    AUDIO_FORMAT_AAC_ADTS_SCALABLE     = 0x1e000020u, // (AAC_ADTS | AAC_SUB_SCALABLE)
    AUDIO_FORMAT_AAC_ADTS_ERLC         = 0x1e000040u, // (AAC_ADTS | AAC_SUB_ERLC)
    AUDIO_FORMAT_AAC_ADTS_LD           = 0x1e000080u, // (AAC_ADTS | AAC_SUB_LD)
    AUDIO_FORMAT_AAC_ADTS_HE_V2        = 0x1e000100u, // (AAC_ADTS | AAC_SUB_HE_V2)
    AUDIO_FORMAT_AAC_ADTS_ELD          = 0x1e000200u, // (AAC_ADTS | AAC_SUB_ELD)
    AUDIO_FORMAT_AAC_ADTS_XHE          = 0x1e000300u, // (AAC_ADTS | AAC_SUB_XHE)
    AUDIO_FORMAT_AAC_LATM_LC           = 0x25000002u, // (AAC_LATM | AAC_SUB_LC)
    AUDIO_FORMAT_AAC_LATM_HE_V1        = 0x25000010u, // (AAC_LATM | AAC_SUB_HE_V1)
    AUDIO_FORMAT_AAC_LATM_HE_V2        = 0x25000100u, // (AAC_LATM | AAC_SUB_HE_V2)
    AUDIO_FORMAT_E_AC3_JOC             = 0xA000001u,  // (E_AC3 | E_AC3_SUB_JOC)
    AUDIO_FORMAT_MAT_1_0               = 0x24000001u, // (MAT | MAT_SUB_1_0)
    AUDIO_FORMAT_MAT_2_0               = 0x24000002u, // (MAT | MAT_SUB_2_0)
    AUDIO_FORMAT_MAT_2_1               = 0x24000003u, // (MAT | MAT_SUB_2_1)
} audio_format_t;

enum {
    FCC_2 = 2,
    FCC_8 = 8,
};

enum {
    AUDIO_CHANNEL_REPRESENTATION_POSITION   = 0x0u,
    AUDIO_CHANNEL_REPRESENTATION_INDEX      = 0x2u,
    AUDIO_CHANNEL_NONE                      = 0x0u,
    AUDIO_CHANNEL_INVALID                   = 0xC0000000u,

    AUDIO_CHANNEL_OUT_FRONT_LEFT            = 0x1u,
    AUDIO_CHANNEL_OUT_FRONT_RIGHT           = 0x2u,
    AUDIO_CHANNEL_OUT_FRONT_CENTER          = 0x4u,
    AUDIO_CHANNEL_OUT_LOW_FREQUENCY         = 0x8u,
    AUDIO_CHANNEL_OUT_BACK_LEFT             = 0x10u,
    AUDIO_CHANNEL_OUT_BACK_RIGHT            = 0x20u,
    AUDIO_CHANNEL_OUT_FRONT_LEFT_OF_CENTER  = 0x40u,
    AUDIO_CHANNEL_OUT_FRONT_RIGHT_OF_CENTER = 0x80u,
    AUDIO_CHANNEL_OUT_BACK_CENTER           = 0x100u,
    AUDIO_CHANNEL_OUT_SIDE_LEFT             = 0x200u,
    AUDIO_CHANNEL_OUT_SIDE_RIGHT            = 0x400u,
    AUDIO_CHANNEL_OUT_TOP_CENTER            = 0x800u,
    AUDIO_CHANNEL_OUT_TOP_FRONT_LEFT        = 0x1000u,
    AUDIO_CHANNEL_OUT_TOP_FRONT_CENTER      = 0x2000u,
    AUDIO_CHANNEL_OUT_TOP_FRONT_RIGHT       = 0x4000u,
    AUDIO_CHANNEL_OUT_TOP_BACK_LEFT         = 0x8000u,
    AUDIO_CHANNEL_OUT_TOP_BACK_CENTER       = 0x10000u,
    AUDIO_CHANNEL_OUT_TOP_BACK_RIGHT        = 0x20000u,
    AUDIO_CHANNEL_OUT_TOP_SIDE_LEFT         = 0x40000u,
    AUDIO_CHANNEL_OUT_TOP_SIDE_RIGHT        = 0x80000u,
    AUDIO_CHANNEL_OUT_HAPTIC_A              = 0x20000000u,
    AUDIO_CHANNEL_OUT_HAPTIC_B              = 0x10000000u,
    AUDIO_CHANNEL_OUT_MONO                  = 0x1u,     // OUT_FRONT_LEFT
    AUDIO_CHANNEL_OUT_STEREO                = 0x3u,     // OUT_FRONT_LEFT | OUT_FRONT_RIGHT
    AUDIO_CHANNEL_OUT_2POINT1               = 0xBu,     // OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_LOW_FREQUENCY
    AUDIO_CHANNEL_OUT_2POINT0POINT2         = 0xC0003u, // OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_TOP_SIDE_LEFT | OUT_TOP_SIDE_RIGHT
    AUDIO_CHANNEL_OUT_2POINT1POINT2         = 0xC000Bu, // OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_TOP_SIDE_LEFT | OUT_TOP_SIDE_RIGHT | OUT_LOW_FREQUENCY
    AUDIO_CHANNEL_OUT_3POINT0POINT2         = 0xC0007u, // OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_FRONT_CENTER | OUT_TOP_SIDE_LEFT | OUT_TOP_SIDE_RIGHT
    AUDIO_CHANNEL_OUT_3POINT1POINT2         = 0xC000Fu, // OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_FRONT_CENTER | OUT_TOP_SIDE_LEFT | OUT_TOP_SIDE_RIGHT | OUT_LOW_FREQUENCY
    AUDIO_CHANNEL_OUT_QUAD                  = 0x33u,    // OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_BACK_LEFT | OUT_BACK_RIGHT
    AUDIO_CHANNEL_OUT_QUAD_BACK             = 0x33u,    // OUT_QUAD
    AUDIO_CHANNEL_OUT_QUAD_SIDE             = 0x603u,   // OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_SIDE_LEFT | OUT_SIDE_RIGHT
    AUDIO_CHANNEL_OUT_SURROUND              = 0x107u,   // OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_FRONT_CENTER | OUT_BACK_CENTER
    AUDIO_CHANNEL_OUT_PENTA                 = 0x37u,    // OUT_QUAD | OUT_FRONT_CENTER
    AUDIO_CHANNEL_OUT_5POINT1               = 0x3Fu,    // OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_FRONT_CENTER | OUT_LOW_FREQUENCY | OUT_BACK_LEFT | OUT_BACK_RIGHT
    AUDIO_CHANNEL_OUT_5POINT1_BACK          = 0x3Fu,    // OUT_5POINT1
    AUDIO_CHANNEL_OUT_5POINT1_SIDE          = 0x60Fu,   // OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_FRONT_CENTER | OUT_LOW_FREQUENCY | OUT_SIDE_LEFT | OUT_SIDE_RIGHT
    AUDIO_CHANNEL_OUT_5POINT1POINT2         = 0xC003Fu, // OUT_5POINT1 | OUT_TOP_SIDE_LEFT | OUT_TOP_SIDE_RIGHT
    AUDIO_CHANNEL_OUT_5POINT1POINT4         = 0x2D03Fu, // OUT_5POINT1 | OUT_TOP_FRONT_LEFT | OUT_TOP_FRONT_RIGHT | OUT_TOP_BACK_LEFT | OUT_TOP_BACK_RIGHT
    AUDIO_CHANNEL_OUT_6POINT1               = 0x13Fu,   // OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_FRONT_CENTER | OUT_LOW_FREQUENCY | OUT_BACK_LEFT | OUT_BACK_RIGHT | OUT_BACK_CENTER
    AUDIO_CHANNEL_OUT_7POINT1               = 0x63Fu,   // OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_FRONT_CENTER | OUT_LOW_FREQUENCY | OUT_BACK_LEFT | OUT_BACK_RIGHT | OUT_SIDE_LEFT | OUT_SIDE_RIGHT
    AUDIO_CHANNEL_OUT_7POINT1POINT2         = 0xC063Fu, // OUT_7POINT1 | OUT_TOP_SIDE_LEFT | OUT_TOP_SIDE_RIGHT
    AUDIO_CHANNEL_OUT_7POINT1POINT4         = 0x2D63Fu, // OUT_7POINT1 | OUT_TOP_FRONT_LEFT | OUT_TOP_FRONT_RIGHT | OUT_TOP_BACK_LEFT | OUT_TOP_BACK_RIGHT
    AUDIO_CHANNEL_OUT_MONO_HAPTIC_A         = 0x20000001u,// OUT_FRONT_LEFT | OUT_HAPTIC_A
    AUDIO_CHANNEL_OUT_STEREO_HAPTIC_A       = 0x20000003u,// OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_HAPTIC_A
    AUDIO_CHANNEL_OUT_HAPTIC_AB             = 0x30000000u,// OUT_HAPTIC_A | OUT_HAPTIC_B
    AUDIO_CHANNEL_OUT_MONO_HAPTIC_AB        = 0x30000001u,// OUT_FRONT_LEFT | OUT_HAPTIC_A | OUT_HAPTIC_B
    AUDIO_CHANNEL_OUT_STEREO_HAPTIC_AB      = 0x30000003u,// OUT_FRONT_LEFT | OUT_FRONT_RIGHT | OUT_HAPTIC_A | OUT_HAPTIC_B

    AUDIO_CHANNEL_IN_LEFT                   = 0x4u,
    AUDIO_CHANNEL_IN_RIGHT                  = 0x8u,
    AUDIO_CHANNEL_IN_FRONT                  = 0x10u,
    AUDIO_CHANNEL_IN_BACK                   = 0x20u,
    AUDIO_CHANNEL_IN_LEFT_PROCESSED         = 0x40u,
    AUDIO_CHANNEL_IN_RIGHT_PROCESSED        = 0x80u,
    AUDIO_CHANNEL_IN_FRONT_PROCESSED        = 0x100u,
    AUDIO_CHANNEL_IN_BACK_PROCESSED         = 0x200u,
    AUDIO_CHANNEL_IN_PRESSURE               = 0x400u,
    AUDIO_CHANNEL_IN_X_AXIS                 = 0x800u,
    AUDIO_CHANNEL_IN_Y_AXIS                 = 0x1000u,
    AUDIO_CHANNEL_IN_Z_AXIS                 = 0x2000u,
    AUDIO_CHANNEL_IN_BACK_LEFT              = 0x10000u,
    AUDIO_CHANNEL_IN_BACK_RIGHT             = 0x20000u,
    AUDIO_CHANNEL_IN_CENTER                 = 0x40000u,
    AUDIO_CHANNEL_IN_LOW_FREQUENCY          = 0x100000u,
    AUDIO_CHANNEL_IN_TOP_LEFT               = 0x200000u,
    AUDIO_CHANNEL_IN_TOP_RIGHT              = 0x400000u,
    AUDIO_CHANNEL_IN_VOICE_UPLINK           = 0x4000u,
    AUDIO_CHANNEL_IN_VOICE_DNLINK           = 0x8000u,
    AUDIO_CHANNEL_IN_MONO                   = 0x10u,     // IN_FRONT
    AUDIO_CHANNEL_IN_STEREO                 = 0xCu,      // IN_LEFT | IN_RIGHT
    AUDIO_CHANNEL_IN_FRONT_BACK             = 0x30u,     // IN_FRONT | IN_BACK
    AUDIO_CHANNEL_IN_6                      = 0xFCu,     // IN_LEFT | IN_RIGHT | IN_FRONT | IN_BACK | IN_LEFT_PROCESSED | IN_RIGHT_PROCESSED
    AUDIO_CHANNEL_IN_2POINT0POINT2          = 0x60000Cu, // IN_LEFT | IN_RIGHT | IN_TOP_LEFT | IN_TOP_RIGHT
    AUDIO_CHANNEL_IN_2POINT1POINT2          = 0x70000Cu, // IN_LEFT | IN_RIGHT | IN_TOP_LEFT | IN_TOP_RIGHT | IN_LOW_FREQUENCY
    AUDIO_CHANNEL_IN_3POINT0POINT2          = 0x64000Cu, // IN_LEFT | IN_CENTER | IN_RIGHT | IN_TOP_LEFT | IN_TOP_RIGHT
    AUDIO_CHANNEL_IN_3POINT1POINT2          = 0x74000Cu, // IN_LEFT | IN_CENTER | IN_RIGHT | IN_TOP_LEFT | IN_TOP_RIGHT | IN_LOW_FREQUENCY
    AUDIO_CHANNEL_IN_5POINT1                = 0x17000Cu, // IN_LEFT | IN_CENTER | IN_RIGHT | IN_BACK_LEFT | IN_BACK_RIGHT | IN_LOW_FREQUENCY
    AUDIO_CHANNEL_IN_VOICE_UPLINK_MONO      = 0x4010u,   // IN_VOICE_UPLINK | IN_MONO
    AUDIO_CHANNEL_IN_VOICE_DNLINK_MONO      = 0x8010u,   // IN_VOICE_DNLINK | IN_MONO
    AUDIO_CHANNEL_IN_VOICE_CALL_MONO        = 0xC010u,   // IN_VOICE_UPLINK_MONO | IN_VOICE_DNLINK_MONO

    AUDIO_CHANNEL_COUNT_MAX                 = 30u,
    AUDIO_CHANNEL_INDEX_HDR                 = 0x80000000u, // REPRESENTATION_INDEX << COUNT_MAX
    AUDIO_CHANNEL_INDEX_MASK_1              = 0x80000001u, // INDEX_HDR | (1 << 1) - 1
    AUDIO_CHANNEL_INDEX_MASK_2              = 0x80000003u, // INDEX_HDR | (1 << 2) - 1
    AUDIO_CHANNEL_INDEX_MASK_3              = 0x80000007u, // INDEX_HDR | (1 << 3) - 1
    AUDIO_CHANNEL_INDEX_MASK_4              = 0x8000000Fu, // INDEX_HDR | (1 << 4) - 1
    AUDIO_CHANNEL_INDEX_MASK_5              = 0x8000001Fu, // INDEX_HDR | (1 << 5) - 1
    AUDIO_CHANNEL_INDEX_MASK_6              = 0x8000003Fu, // INDEX_HDR | (1 << 6) - 1
    AUDIO_CHANNEL_INDEX_MASK_7              = 0x8000007Fu, // INDEX_HDR | (1 << 7) - 1
    AUDIO_CHANNEL_INDEX_MASK_8              = 0x800000FFu, // INDEX_HDR | (1 << 8) - 1
    AUDIO_CHANNEL_INDEX_MASK_9              = 0x800001FFu, // INDEX_HDR | (1 << 9) - 1
    AUDIO_CHANNEL_INDEX_MASK_10             = 0x800003FFu, // INDEX_HDR | (1 << 10) - 1
    AUDIO_CHANNEL_INDEX_MASK_11             = 0x800007FFu, // INDEX_HDR | (1 << 11) - 1
    AUDIO_CHANNEL_INDEX_MASK_12             = 0x80000FFFu, // INDEX_HDR | (1 << 12) - 1
    AUDIO_CHANNEL_INDEX_MASK_13             = 0x80001FFFu, // INDEX_HDR | (1 << 13) - 1
    AUDIO_CHANNEL_INDEX_MASK_14             = 0x80003FFFu, // INDEX_HDR | (1 << 14) - 1
    AUDIO_CHANNEL_INDEX_MASK_15             = 0x80007FFFu, // INDEX_HDR | (1 << 15) - 1
    AUDIO_CHANNEL_INDEX_MASK_16             = 0x8000FFFFu, // INDEX_HDR | (1 << 16) - 1
    AUDIO_CHANNEL_INDEX_MASK_17             = 0x8001FFFFu, // INDEX_HDR | (1 << 17) - 1
    AUDIO_CHANNEL_INDEX_MASK_18             = 0x8003FFFFu, // INDEX_HDR | (1 << 18) - 1
    AUDIO_CHANNEL_INDEX_MASK_19             = 0x8007FFFFu, // INDEX_HDR | (1 << 19) - 1
    AUDIO_CHANNEL_INDEX_MASK_20             = 0x800FFFFFu, // INDEX_HDR | (1 << 20) - 1
    AUDIO_CHANNEL_INDEX_MASK_21             = 0x801FFFFFu, // INDEX_HDR | (1 << 21) - 1
    AUDIO_CHANNEL_INDEX_MASK_22             = 0x803FFFFFu, // INDEX_HDR | (1 << 22) - 1
    AUDIO_CHANNEL_INDEX_MASK_23             = 0x807FFFFFu, // INDEX_HDR | (1 << 23) - 1
    AUDIO_CHANNEL_INDEX_MASK_24             = 0x80FFFFFFu, // INDEX_HDR | (1 << 24) - 1
};

typedef enum {
#ifndef AUDIO_NO_SYSTEM_DECLARATIONS
    AUDIO_MODE_INVALID = -2, // (-2)
    AUDIO_MODE_CURRENT = -1, // (-1)
#endif // AUDIO_NO_SYSTEM_DECLARATIONS
    AUDIO_MODE_NORMAL = 0,
    AUDIO_MODE_RINGTONE = 1,
    AUDIO_MODE_IN_CALL = 2,
    AUDIO_MODE_IN_COMMUNICATION = 3,
} audio_mode_t;

enum {
    AUDIO_DEVICE_NONE                          = 0x0u,
    AUDIO_DEVICE_BIT_IN                        = 0x80000000u,
    AUDIO_DEVICE_BIT_DEFAULT                   = 0x40000000u,

    AUDIO_DEVICE_OUT_EARPIECE                  = 0x1u,
    AUDIO_DEVICE_OUT_SPEAKER                   = 0x2u,
    AUDIO_DEVICE_OUT_WIRED_HEADSET             = 0x4u,
    AUDIO_DEVICE_OUT_WIRED_HEADPHONE           = 0x8u,
    AUDIO_DEVICE_OUT_BLUETOOTH_SCO             = 0x10u,
    AUDIO_DEVICE_OUT_BLUETOOTH_SCO_HEADSET     = 0x20u,
    AUDIO_DEVICE_OUT_BLUETOOTH_SCO_CARKIT      = 0x40u,
    AUDIO_DEVICE_OUT_BLUETOOTH_A2DP            = 0x80u,
    AUDIO_DEVICE_OUT_BLUETOOTH_A2DP_HEADPHONES = 0x100u,
    AUDIO_DEVICE_OUT_BLUETOOTH_A2DP_SPEAKER    = 0x200u,
    AUDIO_DEVICE_OUT_AUX_DIGITAL               = 0x400u,
    AUDIO_DEVICE_OUT_HDMI                      = 0x400u,      // OUT_AUX_DIGITAL
    AUDIO_DEVICE_OUT_ANLG_DOCK_HEADSET         = 0x800u,
    AUDIO_DEVICE_OUT_DGTL_DOCK_HEADSET         = 0x1000u,
    AUDIO_DEVICE_OUT_USB_ACCESSORY             = 0x2000u,
    AUDIO_DEVICE_OUT_USB_DEVICE                = 0x4000u,
    AUDIO_DEVICE_OUT_REMOTE_SUBMIX             = 0x8000u,
    AUDIO_DEVICE_OUT_TELEPHONY_TX              = 0x10000u,
    AUDIO_DEVICE_OUT_LINE                      = 0x20000u,
    AUDIO_DEVICE_OUT_HDMI_ARC                  = 0x40000u,
    AUDIO_DEVICE_OUT_SPDIF                     = 0x80000u,
    AUDIO_DEVICE_OUT_FM                        = 0x100000u,
    AUDIO_DEVICE_OUT_AUX_LINE                  = 0x200000u,
    AUDIO_DEVICE_OUT_SPEAKER_SAFE              = 0x400000u,
    AUDIO_DEVICE_OUT_IP                        = 0x800000u,
    AUDIO_DEVICE_OUT_BUS                       = 0x1000000u,
    AUDIO_DEVICE_OUT_PROXY                     = 0x2000000u,
    AUDIO_DEVICE_OUT_USB_HEADSET               = 0x4000000u,
    AUDIO_DEVICE_OUT_HEARING_AID               = 0x8000000u,
    AUDIO_DEVICE_OUT_ECHO_CANCELLER            = 0x10000000u,
    AUDIO_DEVICE_OUT_DEFAULT                   = 0x40000000u, // BIT_DEFAULT

    AUDIO_DEVICE_IN_COMMUNICATION              = 0x80000001u, // BIT_IN | 0x1
    AUDIO_DEVICE_IN_AMBIENT                    = 0x80000002u, // BIT_IN | 0x2
    AUDIO_DEVICE_IN_BUILTIN_MIC                = 0x80000004u, // BIT_IN | 0x4
    AUDIO_DEVICE_IN_BLUETOOTH_SCO_HEADSET      = 0x80000008u, // BIT_IN | 0x8
    AUDIO_DEVICE_IN_WIRED_HEADSET              = 0x80000010u, // BIT_IN | 0x10
    AUDIO_DEVICE_IN_AUX_DIGITAL                = 0x80000020u, // BIT_IN | 0x20
    AUDIO_DEVICE_IN_HDMI                       = 0x80000020u, // IN_AUX_DIGITAL
    AUDIO_DEVICE_IN_VOICE_CALL                 = 0x80000040u, // BIT_IN | 0x40
    AUDIO_DEVICE_IN_TELEPHONY_RX               = 0x80000040u, // IN_VOICE_CALL
    AUDIO_DEVICE_IN_BACK_MIC                   = 0x80000080u, // BIT_IN | 0x80
    AUDIO_DEVICE_IN_REMOTE_SUBMIX              = 0x80000100u, // BIT_IN | 0x100
    AUDIO_DEVICE_IN_ANLG_DOCK_HEADSET          = 0x80000200u, // BIT_IN | 0x200
    AUDIO_DEVICE_IN_DGTL_DOCK_HEADSET          = 0x80000400u, // BIT_IN | 0x400
    AUDIO_DEVICE_IN_USB_ACCESSORY              = 0x80000800u, // BIT_IN | 0x800
    AUDIO_DEVICE_IN_USB_DEVICE                 = 0x80001000u, // BIT_IN | 0x1000
    AUDIO_DEVICE_IN_FM_TUNER                   = 0x80002000u, // BIT_IN | 0x2000
    AUDIO_DEVICE_IN_TV_TUNER                   = 0x80004000u, // BIT_IN | 0x4000
    AUDIO_DEVICE_IN_LINE                       = 0x80008000u, // BIT_IN | 0x8000
    AUDIO_DEVICE_IN_SPDIF                      = 0x80010000u, // BIT_IN | 0x10000
    AUDIO_DEVICE_IN_BLUETOOTH_A2DP             = 0x80020000u, // BIT_IN | 0x20000
    AUDIO_DEVICE_IN_LOOPBACK                   = 0x80040000u, // BIT_IN | 0x40000
    AUDIO_DEVICE_IN_IP                         = 0x80080000u, // BIT_IN | 0x80000
    AUDIO_DEVICE_IN_BUS                        = 0x80100000u, // BIT_IN | 0x100000
    AUDIO_DEVICE_IN_PROXY                      = 0x81000000u, // BIT_IN | 0x1000000
    AUDIO_DEVICE_IN_USB_HEADSET                = 0x82000000u, // BIT_IN | 0x2000000
    AUDIO_DEVICE_IN_BLUETOOTH_BLE              = 0x84000000u, // BIT_IN | 0x4000000
    AUDIO_DEVICE_IN_HDMI_ARC                   = 0x88000000u, // BIT_IN | 0x8000000
    AUDIO_DEVICE_IN_ECHO_REFERENCE             = 0x90000000u, // BIT_IN | 0x10000000
    AUDIO_DEVICE_IN_DEFAULT                    = 0xC0000000u, // BIT_IN | BIT_DEFAULT
};

typedef enum {
    AUDIO_OUTPUT_FLAG_NONE             = 0x0,
    AUDIO_OUTPUT_FLAG_DIRECT           = 0x1,
    AUDIO_OUTPUT_FLAG_PRIMARY          = 0x2,
    AUDIO_OUTPUT_FLAG_FAST             = 0x4,
    AUDIO_OUTPUT_FLAG_DEEP_BUFFER      = 0x8,
    AUDIO_OUTPUT_FLAG_COMPRESS_OFFLOAD = 0x10,
    AUDIO_OUTPUT_FLAG_NON_BLOCKING     = 0x20,
    AUDIO_OUTPUT_FLAG_HW_AV_SYNC       = 0x40,
    AUDIO_OUTPUT_FLAG_TTS              = 0x80,
    AUDIO_OUTPUT_FLAG_RAW              = 0x100,
    AUDIO_OUTPUT_FLAG_SYNC             = 0x200,
    AUDIO_OUTPUT_FLAG_IEC958_NONAUDIO  = 0x400,
    AUDIO_OUTPUT_FLAG_DIRECT_PCM       = 0x2000,
    AUDIO_OUTPUT_FLAG_MMAP_NOIRQ       = 0x4000,
    AUDIO_OUTPUT_FLAG_VOIP_RX          = 0x8000,
    AUDIO_OUTPUT_FLAG_INCALL_MUSIC     = 0x10000,
} audio_output_flags_t;

typedef enum {
    AUDIO_INPUT_FLAG_NONE       = 0x0,
    AUDIO_INPUT_FLAG_FAST       = 0x1,
    AUDIO_INPUT_FLAG_HW_HOTWORD = 0x2,
    AUDIO_INPUT_FLAG_RAW        = 0x4,
    AUDIO_INPUT_FLAG_SYNC       = 0x8,
    AUDIO_INPUT_FLAG_MMAP_NOIRQ = 0x10,
    AUDIO_INPUT_FLAG_VOIP_TX    = 0x20,
    AUDIO_INPUT_FLAG_HW_AV_SYNC = 0x40,
#ifndef AUDIO_NO_SYSTEM_DECLARATIONS  // TODO: Expose at HAL interface, remove FRAMEWORK_FLAGS mask
    AUDIO_INPUT_FLAG_DIRECT     = 0x80,
    AUDIO_INPUT_FRAMEWORK_FLAGS = AUDIO_INPUT_FLAG_DIRECT,
#endif
} audio_input_flags_t;

typedef enum {
    AUDIO_USAGE_UNKNOWN = 0,
    AUDIO_USAGE_MEDIA = 1,
    AUDIO_USAGE_VOICE_COMMUNICATION = 2,
    AUDIO_USAGE_VOICE_COMMUNICATION_SIGNALLING = 3,
    AUDIO_USAGE_ALARM = 4,
    AUDIO_USAGE_NOTIFICATION = 5,
    AUDIO_USAGE_NOTIFICATION_TELEPHONY_RINGTONE = 6,
#ifndef AUDIO_NO_SYSTEM_DECLARATIONS
    AUDIO_USAGE_NOTIFICATION_COMMUNICATION_REQUEST = 7,
    AUDIO_USAGE_NOTIFICATION_COMMUNICATION_INSTANT = 8,
    AUDIO_USAGE_NOTIFICATION_COMMUNICATION_DELAYED = 9,
    AUDIO_USAGE_NOTIFICATION_EVENT = 10,
#endif // AUDIO_NO_SYSTEM_DECLARATIONS
    AUDIO_USAGE_ASSISTANCE_ACCESSIBILITY = 11,
    AUDIO_USAGE_ASSISTANCE_NAVIGATION_GUIDANCE = 12,
    AUDIO_USAGE_ASSISTANCE_SONIFICATION = 13,
    AUDIO_USAGE_GAME = 14,
    AUDIO_USAGE_VIRTUAL_SOURCE = 15,
    AUDIO_USAGE_ASSISTANT = 16,
} audio_usage_t;

typedef enum {
    AUDIO_CONTENT_TYPE_UNKNOWN = 0u,
    AUDIO_CONTENT_TYPE_SPEECH = 1u,
    AUDIO_CONTENT_TYPE_MUSIC = 2u,
    AUDIO_CONTENT_TYPE_MOVIE = 3u,
    AUDIO_CONTENT_TYPE_SONIFICATION = 4u,
} audio_content_type_t;

enum {
    AUDIO_GAIN_MODE_JOINT    = 0x1u,
    AUDIO_GAIN_MODE_CHANNELS = 0x2u,
    AUDIO_GAIN_MODE_RAMP     = 0x4u,
};

typedef enum {
    AUDIO_PORT_ROLE_NONE = 0,
    AUDIO_PORT_ROLE_SOURCE = 1, // (::android::hardware::audio::common::V4_0::AudioPortRole.NONE implicitly + 1)
    AUDIO_PORT_ROLE_SINK = 2, // (::android::hardware::audio::common::V4_0::AudioPortRole.SOURCE implicitly + 1)
} audio_port_role_t;

typedef enum {
    AUDIO_PORT_TYPE_NONE = 0,
    AUDIO_PORT_TYPE_DEVICE = 1, // (::android::hardware::audio::common::V4_0::AudioPortType.NONE implicitly + 1)
    AUDIO_PORT_TYPE_MIX = 2, // (::android::hardware::audio::common::V4_0::AudioPortType.DEVICE implicitly + 1)
    AUDIO_PORT_TYPE_SESSION = 3, // (::android::hardware::audio::common::V4_0::AudioPortType.MIX implicitly + 1)
} audio_port_type_t;

enum {
    AUDIO_PORT_CONFIG_SAMPLE_RATE  = 0x1u,
    AUDIO_PORT_CONFIG_CHANNEL_MASK = 0x2u,
    AUDIO_PORT_CONFIG_FORMAT       = 0x4u,
    AUDIO_PORT_CONFIG_GAIN         = 0x8u,
#ifndef AUDIO_NO_SYSTEM_DECLARATIONS
    AUDIO_PORT_CONFIG_FLAGS        = 0x10u,  // Absent from AudioPortConfigMask, framework only.
#endif
};

typedef enum {
    AUDIO_LATENCY_LOW = 0,
    AUDIO_LATENCY_NORMAL = 1, // (::android::hardware::audio::common::V4_0::AudioMixLatencyClass.LOW implicitly + 1)
} audio_mix_latency_class_t;

typedef enum {
    MIC_DIRECTION_UNSPECIFIED = 0,
    MIC_DIRECTION_FRONT = 1,
    MIC_DIRECTION_BACK = 2,
    MIC_DIRECTION_EXTERNAL = 3,
} audio_microphone_direction_t;
#ifdef __cplusplus
}
#endif

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_COMMON_V4_0_EXPORTED_CONSTANTS_H_
