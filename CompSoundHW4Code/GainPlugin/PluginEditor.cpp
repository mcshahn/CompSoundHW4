/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
CompSoundHW4AudioProcessorEditor::CompSoundHW4AudioProcessorEditor (CompSoundHW4AudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    mGainSlider.setSliderStyle (juce::Slider::SliderStyle::LinearVertical);
    mGainSlider.setTextBoxStyle (juce::Slider::TextBoxBelow, true, 50, 20 );
    mGainSlider.setRange (0.0f, 1.0f, 0.01f);
    mGainSlider.setValue (0.5f);
    mGainSlider.addListener (this);
    addAndMakeVisible (mGainSlider);
    
    setSize (200, 300);
}

CompSoundHW4AudioProcessorEditor::~CompSoundHW4AudioProcessorEditor()
{
}

//==============================================================================
void CompSoundHW4AudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
//    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
//
//    g.setColour (juce::Colours::white);
//    g.setFont (15.0f);
//    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
    g.fillAll (juce::Colours::black);
}

void CompSoundHW4AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    mGainSlider.setBounds (getWidth()/2-50, getHeight()/2-75, 100, 150);
}

void CompSoundHW4AudioProcessorEditor::sliderValueChanged (juce::Slider *slider)
{
    if (slider == &mGainSlider){
        audioProcessor.mGain = mGainSlider.getValue();
    }
}
