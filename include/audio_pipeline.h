// Definitions for the audio processing pipeline. Provides setup
// and buffer mixing utilities used by the main firmware.
#ifndef AUDIO_PIPELINE_H
#define AUDIO_PIPELINE_H

#include <Audio.h>

extern AudioInputI2S i2sIn;
extern AudioEffectDelay delay1;
extern AudioFilterStateVariable filter1;
extern AudioPlayQueue queueL, queueR;
extern AudioPlayQueue cleanQueueL, cleanQueueR;
extern AudioEffectEnvelope limiter1;
extern AudioOutputI2S i2sOut;
extern AudioMixer4 feedbackMixer;

extern float mixAmount;
extern float feedbackAmount;

void setupAudioPipeline();
void processAudioQueues();
float processDirt(float sample);

#endif
