/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoFillWebView : WKWebView <WBUFormAutoFillWebView> {
    NSDictionary * _lastPasswordGenerationOrSubmitEventForm;
    WBUFormAutoFillFrameHandle * _lastPasswordGenerationOrSubmitEventFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *webui_EVOrganizationName;
@property (setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:, nonatomic, copy) NSString *webui_lastGeneratedPasswordForCurrentBackForwardItem;
@property (nonatomic, readonly) bool webui_privateBrowsingEnabled;
@property (nonatomic, readonly) UIView *webui_viewForAutoFillPrompt;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundOrWillTerminate:(id)arg1;
- (void)_close;
- (struct __SecTrust { }*)_serverTrust;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (id)webui_EVOrganizationName;
- (id)webui_formMetadataAndFrame:(id*)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
- (id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
- (id)webui_lastGeneratedPasswordForCurrentBackForwardItem;
- (id /* block */)webui_preventNavigationDuringAutoFillPrompt;
- (bool)webui_privateBrowsingEnabled;
- (void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
- (void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
- (void)webui_setLastGeneratedPasswordForCurrentBackForwardItem:(id)arg1;
- (id)webui_viewForAutoFillPrompt;

@end
