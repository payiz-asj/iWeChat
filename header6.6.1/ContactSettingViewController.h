//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "IOplogExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CContact, DelaySwitchSettingLogic, ForwardMessageLogicController, MMTableViewInfo, NSString, WCOpLog;
@protocol ContactInfoAssistDelegate;

@interface ContactSettingViewController : MMUIViewController <WCActionSheetDelegate, ForwardMessageLogicDelegate, IOplogExt>
{
    MMTableViewInfo *m_tableViewInfo;
    CContact *m_contact;
    id <ContactInfoAssistDelegate> m_delegate;
    WCOpLog *_wcOpLog;
    NSString *m_recommandRemark;
    unsigned int m_scene;
    ForwardMessageLogicController *m_forwardLogic;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    _Bool m_toBeDeleted;
}

@property(retain, nonatomic) NSString *m_recommandRemark; // @synthesize m_recommandRemark;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadTableView;
- (void)opFavour;
- (void)opWCBlacklist:(id)arg1;
- (void)opOutsider:(id)arg1;
- (void)opEditRemarkName;
- (id)getCurrentViewController;
- (void)opShareMyFriend;
- (void)opDelete:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)realDoDelete;
- (void)onArriveFundConfirmDeleteContact;
- (void)onArriveFundCancelDeleteContact;
- (void)checkDeleteContact;
- (void)doDeleteLocal;
- (void)doExpose:(int)arg1;
- (void)opExpose;
- (void)opBlackList;
- (void)cancelBlackListSwitch;
- (void)doAddToBlackList;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)doDeleteAndExpose;
- (void)doAddToBlackListAndExpose;
- (void)addToBlackList;
- (void)removeFromBlackList;
- (_Bool)isShowBlackAction;
- (_Bool)isInMyContactList;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1 inScene:(unsigned int)arg2;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
