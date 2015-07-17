/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRelayActivationClient : HAPRelayActivationClient <HMDFairPlaySAPSessionDelegate> {
    NSString * _challengeIdentifier;
    HMDFairPlaySAPSession * _fairPlaySession;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSString *challengeIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDFairPlaySAPSession *fairPlaySession;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)baseURL;
+ (id)certificateURL;
+ (id)nonceWithLength:(unsigned int)arg1;
+ (id)sharedSession;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (id)_createCertificateResponseBodyWithChallengeCertificate:(id)arg1 publicKey:(id)arg2 challengeResponse:(id)arg3 nonce:(id)arg4 signature:(id)arg5 error:(id*)arg6;
- (id)_createChallengeRequestBodyWithFairPlayClientExchangeData:(id)arg1 error:(id*)arg2;
- (void)_handleCertificateResponseData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_handleChallengeResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleFairPlayCertificateResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_reallyRequestChallengeWithFairPlayClientExchangeData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_requestFairPlayCertificateWithCompletionHandler:(id /* block */)arg1;
- (id)challengeIdentifier;
- (void)close;
- (id)fairPlaySession;
- (id)init;
- (void)open;
- (void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3;
- (void)requestChallenge;
- (void)session:(id)arg1 didCloseWithError:(id)arg2;
- (void)session:(id)arg1 didReceiveClientExchangeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)session:(id)arg1 didReceiveServerCertificateRequestWithCompletionHandler:(id /* block */)arg2;
- (void)setChallengeIdentifier:(id)arg1;
- (id)workQueue;

@end