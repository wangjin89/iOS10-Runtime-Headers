/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceDiscovery : NSObject <NSSecureCoding, SFXPCInterface> {
    bool  _activateCalled;
    unsigned long long  _activateTicks;
    unsigned int  _changeFlags;
    NSObject<OS_dispatch_source> * _consoleUserTimer;
    id /* block */  _deviceChangedHandler;
    NSSet * _deviceFilter;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    struct NSMutableDictionary { Class x1; } * _devices;
    unsigned long long  _discoveryFlags;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    bool  _legacy;
    long long  _rssiThreshold;
    bool  _scanCache;
    long long  _scanRate;
    bool  _targetUserSession;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic, copy) id /* block */ deviceChangedHandler;
@property (nonatomic, copy) NSSet *deviceFilter;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic) unsigned long long discoveryFlags;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic) bool scanCache;
@property (nonatomic) long long scanRate;
@property (nonatomic) bool targetUserSession;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (int)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_invokeBlockActivateSafe:(id /* block */)arg1;
- (void)_retryConsole;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned int)changeFlags;
- (void)dealloc;
- (id)description;
- (id /* block */)deviceChangedHandler;
- (void)deviceDiscoveryDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)deviceDiscoveryFoundDevice:(id)arg1;
- (void)deviceDiscoveryLostDevice:(id)arg1;
- (id)deviceFilter;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (unsigned long long)discoveryFlags;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (long long)rssiThreshold;
- (bool)scanCache;
- (long long)scanRate;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDeviceChangedHandler:(id /* block */)arg1;
- (void)setDeviceFilter:(id)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDiscoveryFlags:(unsigned long long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRssiThreshold:(long long)arg1;
- (void)setScanCache:(bool)arg1;
- (void)setScanRate:(long long)arg1;
- (void)setTargetUserSession:(bool)arg1;
- (bool)targetUserSession;

@end
