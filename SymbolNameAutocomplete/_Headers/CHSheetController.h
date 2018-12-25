//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CHWindowController.h"

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

@class NSCountedSet, NSString, NSWindow;

@interface CHSheetController : CHWindowController <NSTouchBarDelegate>
{
    id _object;
    NSWindow *_parentWindow;
    NSCountedSet *_selfReferences;
}

+ (id)findSuitableWindowForSheet;
+ (id)runForWindow:(id)arg1 withObject:(id)arg2;
+ (id)runForWindow:(id)arg1;
@property(retain, nonatomic) NSCountedSet *selfReferences; // @synthesize selfReferences=_selfReferences;
@property(nonatomic) __weak NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain, nonatomic) id object; // @synthesize object=_object;

- (void)sheetWillClose;
- (id)_init;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (SEL)selectorForTouchbarItemIdentifier:(id)arg1;
- (id)touchBarItemIdentifiers;
- (id)windowNibName;
- (void)closeSheet;
- (void)cancel:(id)arg1;
- (void)confirm:(id)arg1;
- (id)run;
- (void)releaseSelf;
- (void)retainSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

