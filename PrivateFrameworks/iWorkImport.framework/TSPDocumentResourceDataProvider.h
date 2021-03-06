/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSHashTable, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, TSPDocumentResourceManager, TSPObjectContext;

@interface TSPDocumentResourceDataProvider : NSObject <TSPDocumentResourceDownloadNotificationProtocol, TSPDocumentResourceDownloader> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPObjectContext *_context;
    BOOL _didCancelDownloads;
    NSMutableArray *_downloadItems;
    long long _estimatedDownloadSize;
    NSMutableSet *_infosToDownload;
    BOOL _isEstimatedDownloadSizePrecise;
    TSPDocumentResourceManager *_manager;
    NSHashTable *_storagesCache;
}

@property(readonly) long long estimatedDownloadSize;
@property(readonly) BOOL isEstimatedDownloadSizePrecise;
@property(readonly) BOOL needsDownload;

+ (void)didCompleteDocumentResourceDownloadWithDigestString:(id)arg1;
+ (void)registerDownloadNotificationClass:(Class)arg1;

- (void).cxx_destruct;
- (void)cacheDataForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3;
- (void)cancelDownloads;
- (id)dataForDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3 needsDownload:(BOOL*)arg4;
- (id)dataForDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3;
- (id)dataStorageForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3 needsDownload:(BOOL*)arg4;
- (id)dataStorageForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3;
- (id)downloadWithDelegate:(id)arg1 description:(id)arg2;
- (long long)estimatedDownloadSize;
- (id)init;
- (id)initWithManager:(id)arg1 context:(id)arg2;
- (BOOL)isEstimatedDownloadSizePrecise;
- (BOOL)needsDownload;

@end
