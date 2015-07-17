/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLSpringBoardAgent : PLAgent {
    PLAccountingGroup *_appAccountingGroup;
    BOOL _autoLockIsNil;
    PLNSTimerOperatorComposition *_dailyWallpaperPoll;
    PLEntryNotificationOperatorComposition *_displayOffNotification;
    PLNSNotificationOperatorComposition *_notificationSBAutoLockTimerFiredNotification;
    PLCFNotificationOperatorComposition *_notificationSBBlankTrackingChanged;
    PLNSNotificationOperatorComposition *_notificationSBLocalNotificationFired;
    PLCFNotificationOperatorComposition *_notificationSBLockTrackingChanged;
    PLNSNotificationOperatorComposition *_notificationSBRemoteNotificationReceived;
    PLNSNotificationOperatorComposition *_notificationSBScreenTimeTrackingChanged;
    PLNSNotificationOperatorComposition *_notificationSBWallpaperTrackingChanged;
    NSDictionary *_screenNumberToName;
}

@property (retain) PLAccountingGroup *appAccountingGroup;
@property BOOL autoLockIsNil;
@property (retain) PLNSTimerOperatorComposition *dailyWallpaperPoll;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (readonly) PLNSNotificationOperatorComposition *notificationSBAutoLockTimerFiredNotification;
@property (readonly) PLCFNotificationOperatorComposition *notificationSBBlankTrackingChanged;
@property (readonly) PLNSNotificationOperatorComposition *notificationSBLocalNotificationFired;
@property (readonly) PLCFNotificationOperatorComposition *notificationSBLockTrackingChanged;
@property (readonly) PLNSNotificationOperatorComposition *notificationSBRemoteNotificationReceived;
@property (readonly) PLNSNotificationOperatorComposition *notificationSBScreenTimeTrackingChanged;
@property (readonly) PLNSNotificationOperatorComposition *notificationSBWallpaperTrackingChanged;
@property (retain) NSDictionary *screenNumberToName;

+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionBlank;
+ (id)entryEventForwardDefinitionLock;
+ (id)entryEventForwardDefinitionScreen;
+ (id)entryEventForwardDefinitionWallpaper;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointAutoLock;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointLocalRemoteNotifications;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (void)addAccountingEvent:(id)arg1;
- (id)appAccountingGroup;
- (BOOL)autoLockIsNil;
- (void)closeLastOpenEventAtDate:(id)arg1;
- (id)dailyWallpaperPoll;
- (void)dealloc;
- (id)displayOffNotification;
- (id)fetchSBWallpaperTypeForHomescreen:(BOOL)arg1;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (void)logNotification:(id)arg1 ofType:(id)arg2;
- (id)notificationSBAutoLockTimerFiredNotification;
- (id)notificationSBBlankTrackingChanged;
- (id)notificationSBLocalNotificationFired;
- (id)notificationSBLockTrackingChanged;
- (id)notificationSBRemoteNotificationReceived;
- (id)notificationSBScreenTimeTrackingChanged;
- (id)notificationSBWallpaperTrackingChanged;
- (void)resetAutoLockIsNil;
- (id)screenLock:(id)arg1;
- (id)screenNumberToName;
- (void)setAppAccountingGroup:(id)arg1;
- (void)setAutoLockIsNil:(BOOL)arg1;
- (void)setAutolockAG;
- (void)setDailyWallpaperPoll:(id)arg1;
- (void)setDisplayOffNotification:(id)arg1;
- (void)setScreenNumberToName:(id)arg1;
- (void)setUpScreenNumberDictionary;
- (void)settingsChangedNotification:(id)arg1;

@end