/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface SyncManager : CHLogger <SyncManagerProtocol> {
    CallHistoryDBClientHandle *_dbHandle;
    TransactionManager *_transactionManager;
}

@property (nonatomic, readonly) CallHistoryDBClientHandle *dbHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addUpdateTransactions:(id)arg1;
- (id)archiveCallObject:(id)arg1;
- (id)dbHandle;
- (void)deleteAllObjects;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (void)deleteObjectsWithLimits:(id)arg1;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (id)fetchAllObjects;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithLimits:(id)arg1;
- (id)init;
- (void)initDBHandle;
- (void)insert:(id)arg1;
- (void)insertRecordsWithoutTransactions:(id)arg1;
- (void)insertWithoutTransaction:(id)arg1;
- (void)resetTimers;
- (double)timerIncoming;
- (double)timerLifetime;
- (double)timerOutgoing;
- (void)updateAllObjects:(id)arg1;
- (void)updateObjects:(id)arg1;

@end