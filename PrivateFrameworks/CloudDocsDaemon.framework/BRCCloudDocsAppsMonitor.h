/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate> {
    NSDictionary *_appIDsByContainerID;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSDictionary *_cloudDocsContainersByAppID;
    NSMutableSet *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    struct br_pacer_t { } *_refetchPacer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)cloudDocsAppsMonitor;

- (void).cxx_destruct;
- (void)_refetchApps;
- (void)_start;
- (void)addObserver:(id)arg1;
- (id)allApplicationIdentifiers;
- (id)applicationIdentifiersForContainerID:(id)arg1;
- (id)containerIDsForApplicationIdentifier:(id)arg1;
- (void)dealloc;
- (void)forceRefetchAppList;
- (id)init;
- (BOOL)isApplicationInstalledForContainerID:(id)arg1;
- (void)removeObserver:(id)arg1;

@end