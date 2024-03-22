/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
CompSoundHW4PitchAudioProcessorEditor::CompSoundHW4PitchAudioProcessorEditor (CompSoundHW4PitchAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    
//    addAndMakeVisible (mGainSlider);
    setSize (200, 300);
    
}

CompSoundHW4PitchAudioProcessorEditor::~CompSoundHW4PitchAudioProcessorEditor()
{
}

//==============================================================================
void CompSoundHW4PitchAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
//    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
//
//    g.setColour (juce::Colours::black);
//    g.setFont (15.0f);
    g.fillAll(juce::Colours::black);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void CompSoundHW4PitchAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
