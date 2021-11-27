/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class BasicFilterAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    BasicFilterAudioProcessorEditor (BasicFilterAudioProcessor&);
    ~BasicFilterAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    Slider filterSlider;
    Slider filterSlider2;
    Label filterLabel1;
    Slider qSlider;
    std::vector<std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment>> sliderAttachment;

    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    BasicFilterAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BasicFilterAudioProcessorEditor)
};
