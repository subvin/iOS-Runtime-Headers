/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKChronoHandsView : NTKAnalogHandsView {
    NTKHandView * _chronoFlybackMinuteHandView;
    NTKHandView * _chronoFlybackSecondHandView;
    NTKHandView * _chronoMinuteHandView;
    NTKHandView * _chronoSecondHandView;
    NTKChronoPalette * _palette;
    unsigned int  _timeScale;
}

@property (nonatomic, readonly) NTKHandView *chronoFlybackMinuteHandView;
@property (nonatomic, readonly) NTKHandView *chronoFlybackSecondHandView;
@property (nonatomic, readonly) NTKHandView *chronoMinuteHandView;
@property (nonatomic, readonly) NTKHandView *chronoSecondHandView;
@property (nonatomic, retain) NTKChronoPalette *palette;
@property (nonatomic) unsigned int timeScale;

+ (int)preferredCountOfInstancesToCache;

- (void).cxx_destruct;
- (void)_enumerateChronoHandViews:(id /* block */)arg1;
- (void)_enumerateFlybackChronoHands:(id /* block */)arg1;
- (void)_enumeratePrimaryChronoHands:(id /* block */)arg1;
- (void)_enumerateSecondHandViewsWithBlock:(id /* block */)arg1;
- (double)_stopwatchCurrentLapTime;
- (double)_stopwatchCurrentTime;
- (BOOL)_stopwatchIsRunning;
- (BOOL)_stopwatchIsStopped;
- (int)_stopwatchLapCount;
- (double)chronoDuration;
- (id)chronoFlybackMinuteHandView;
- (id)chronoFlybackSecondHandView;
- (id)chronoMinuteHandView;
- (id)chronoSecondHandView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)palette;
- (double)secondsAnimationFPS;
- (void)setPalette:(id)arg1;
- (void)setTimeScale:(unsigned int)arg1;
- (void)showChronoMode;
- (void)showTimeMode;
- (void)startNewChronoAnimation;
- (void)stopChronoAnimation;
- (unsigned int)timeScale;
- (void)updateLapHandsVisibility;
- (double)upperDuration;
- (float)zRotationForTime:(double)arg1 withDuration:(float)arg2;

@end
