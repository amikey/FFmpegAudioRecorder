//
//  MyConfiguration.h
//  FFmpegAudioRecorder
//
//  Created by Liao KuoHsun on 2014/9/2.
//  Copyright (c) 2014年 Liao KuoHsun. All rights reserved.
//

#ifndef FFmpegAudioRecorder_MyConfiguration_h
#define FFmpegAudioRecorder_MyConfiguration_h

#define AQ_SAVE_FILE_AS_MP4 0//1

#define STR_AV_AUDIO_RECORDER     "AVAudioRecorder"
#define STR_AV_AUDIO_QUEUE        "AudioQueue"
#define STR_AV_AUDIO_CONVERTER    "AudioQueue + AudioConverter"
#define STR_FFMPEG  "AudioUnit + FFMPEG"
#define STR_AV_AUDIO_REC_AND_PLAY_BY_AQ "RecAndPlay by AudioQueue"
#define STR_AV_AUDIO_REC_AND_PLAY_BY_AU "RecAndPlay by AudioUint"
#define STR_AV_AUDIO_REC_AND_PLAY_BY_AG "RecAndPlay by AudioGraph"

#define STR_AAC     "AAC"
#define STR_ALAC    "ALAC"
#define STR_IMA4    "IMA4"
#define STR_ILBC    "ILBC"
#define STR_PCM     "PCM"
#define STR_MULAW   "MULAW"
#define STR_ALAW    "ALAW"
#define STR_PCM     "PCM"

typedef enum eEncodeAudioFormat {
    eRecFmt_AAC  = 0,
    eRecFmt_ALAC,
    eRecFmt_IMA4,
    eRecFmt_ILBC,
    eRecFmt_MULAW,
    eRecFmt_ALAW,
    eRecFmt_PCM,
    eRecFmt_Max,
}eEncodeAudioFormat;

// TODO: modify here to do specific test easily
#if 1
typedef enum eEncodeAudioMethod {
    eRecMethod_iOS_AudioRecorder        = 0,
    eRecMethod_iOS_AudioQueue           = 1,
    eRecMethod_iOS_AudioConverter       = 2,
    eRecMethod_FFmpeg                   = 3,
    eRecMethod_iOS_RecordAndPlayByAQ    = 4,
    eRecMethod_iOS_RecordAndPlayByAU    = 5,
    eRecMethod_iOS_RecordAndPlayByAG    = 6,
    eRecMethod_Max,
}eEncodeAudioMethod;
#else

typedef enum eEncodeAudioMethod {
    eRecMethod_iOS_RecordAndPlayByAG  = 0,
    eRecMethod_iOS_AudioConverter = 1,
    eRecMethod_iOS_AudioQueue  = 2,
    eRecMethod_iOS_AudioRecorder  = 3,
    eRecMethod_FFmpeg  = 4,
    eRecMethod_iOS_RecordAndPlayByAQ  = 5,
    eRecMethod_iOS_RecordAndPlayByAU  = 6,
    eRecMethod_Max,
}eEncodeAudioMethod;
#endif


#endif
