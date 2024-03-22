/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class CompSoundHW4PitchAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    CompSoundHW4PitchAudioProcessorEditor (CompSoundHW4PitchAudioProcessor&);
    ~CompSoundHW4PitchAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    CompSoundHW4PitchAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CompSoundHW4PitchAudioProcessorEditor)
};
