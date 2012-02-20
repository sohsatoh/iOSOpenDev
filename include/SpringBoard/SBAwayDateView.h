/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class NSString, NSTimer, TPLCDTextView, UILabel, SBAwayMediaControlsView;
@protocol SBAwayDateViewDelegate;

@interface SBAwayDateView : SBUnknownSuperclass {
	NSTimer *_dateTimer;	// 48 = 0x30
	TPLCDTextView *_timeLabel;	// 52 = 0x34
	TPLCDTextView *_dateAndTetheringLabel;	// 56 = 0x38
	NSString *_title;	// 60 = 0x3c
	NSString *_artist;	// 64 = 0x40
	NSString *_album;	// 68 = 0x44
	UILabel *_nowPlayingTitleLabel;	// 72 = 0x48
	UILabel *_nowPlayingArtistLabel;	// 76 = 0x4c
	UILabel *_nowPlayingAlbumLabel;	// 80 = 0x50
	SBAwayMediaControlsView *_controlsView;	// 84 = 0x54
	id<SBAwayDateViewDelegate> _delegate;	// 88 = 0x58
	int _orientation;	// 92 = 0x5c
	unsigned _isPlaying : 1;	// 96 = 0x60
}
@property(assign, nonatomic) id<SBAwayDateViewDelegate> delegate;	// G=0x4ce0d; S=0x4ce1d; @synthesize=_delegate
@property(assign, nonatomic) int orientation;	// G=0x4cdfd; S=0x4e8ed; @synthesize=_orientation
@property(assign, nonatomic, getter=isPlaying) BOOL playing;	// G=0x4cde9; S=0x4d225; 
@property(retain, nonatomic) NSString *title;	// G=0x4cdd9; S=0x4da41; 
@property(assign) BOOL isShowingControls;	// G=0x4d2b1; S=0x4d309; converted property
@property(readonly, retain) SBAwayMediaControlsView *controlsView;	// G=0x4d731; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x4ce2d
- (void)dealloc;	// 0x4ea95
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x4e8ed
- (id)labelWithFontSize:(float)fontSize origin:(CGPoint)origin fontName:(const char *)name;	// 0x4e76d
- (id)labelWithFontSize:(float)fontSize origin:(CGPoint)origin;	// 0x4e749
- (id)newNowPlayingLabelWithFont:(id)font color:(id)color;	// 0x4e629
- (void)resizeAndPositionNowPlayingLabels;	// 0x4e1a5
- (void)updateLabels;	// 0x4dc51
- (void)setAlpha:(float)alpha;	// 0x4dbc5
- (void)updateClockFormat;	// 0x4db85
- (void)updateClock;	// 0x4dad5
// declared property setter: - (void)setTitle:(id)title;	// 0x4da41
// declared property getter: - (id)title;	// 0x4cdd9
- (void)setArtist:(id)artist;	// 0x4d9e9
- (void)setAlbum:(id)album;	// 0x4d991
- (void)removeFromSuperview;	// 0x4d929
- (void)didMoveToSuperview;	// 0x4d8d5
// converted property getter: - (id)controlsView;	// 0x4d731
// converted property setter: - (void)setIsShowingControls:(BOOL)controls;	// 0x4d309
- (void)dismissMediaControlsOverlaysAnimated:(BOOL)animated;	// 0x4d2e5
// converted property getter: - (BOOL)isShowingControls;	// 0x4d2b1
- (BOOL)isMediaControlsShowingOverlays;	// 0x4d265
// declared property setter: - (void)setPlaying:(BOOL)playing;	// 0x4d225
// declared property getter: - (BOOL)isPlaying;	// 0x4cde9
// declared property getter: - (int)orientation;	// 0x4cdfd
// declared property getter: - (id)delegate;	// 0x4ce0d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4ce1d
@end