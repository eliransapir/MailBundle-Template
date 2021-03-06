/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSResponder.h"

#import "MVMailboxSelectionOwner-Protocol.h"
#import "MVTerminationHandler-Protocol.h"
#import "MailboxesOutlineViewControllerDelegate-Protocol.h"
#import "MessageTransferDelegate-Protocol.h"
#import "NSAnimationDelegate-Protocol.h"
#import "NSSpeechSynthesizerDelegate-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class ActivityViewController, ColorBackgroundView, ExpandingSplitView, MailToolbar, MailVerticalSplitView, MailboxPaneBottomView, MailboxesOutlineViewController, MessageContentController, MessageMall, MessageViewerLazyPopUpButton, MessageViewerSearchField, NSArray, NSButton, NSDictionary, NSMenu, NSMenuItem, NSMutableArray, NSMutableDictionary, NSNumber, NSScrollView, NSString, NSToolbarItem, NSWindow, SafeBoolCache, SearchSliceView, SplitterAnimation, TableViewManager, ToDoListController, ToDoListView, ToDoMall, VerticalSplitViewHandle;

@interface MessageViewer : NSResponder <MailboxesOutlineViewControllerDelegate, MessageTransferDelegate, MVMailboxSelectionOwner, NSAnimationDelegate, NSSpeechSynthesizerDelegate, NSSplitViewDelegate, NSUserInterfaceValidations, NSWindowDelegate, MVTerminationHandler>
{
    MessageMall *_messageMall;
    TableViewManager *_tableManager;
    MessageContentController *_contentController;
    MailboxesOutlineViewController *_outlineViewController;
    NSWindow *_window;
    ExpandingSplitView *_splitView;
    NSScrollView *_messageListScrollView;
    MailVerticalSplitView *_verticalSplitView;
    ColorBackgroundView *_viewerContainer;
    ColorBackgroundView *_mailboxesView;
    ActivityViewController *_activityViewController;
    NSToolbarItem *_searchViewItem;
    NSString *_lastSearchPhrase;
    NSString *_searchPhrase;
    int _currentSearchArea;
    int _currentSearchField;
    int _currentSearchTarget;
    long long _selectedTag;
    BOOL _userChangedSliceView;
    NSMenu *_tableHeaderMenu;
    ToDoListController *_toDoController;
    ToDoMall *_toDoMall;
    NSScrollView *_toDoScrollView;
    ToDoListView *_toDoListView;
    NSMenu *_toDoColumnsMenu;
    NSMenu *_toDoSortByMenu;
    NSMenu *_messageColumnsMenu;
    NSMenu *_messageSortByMenu;
    NSMenuItem *_columnsMenuItem;
    NSMenuItem *_sortByMenuItem;
    BOOL _toDoListViewIsShowing;
    BOOL _previewPaneWasVisibleWhenToDoListWasShown;
    NSArray *_toDoMailboxes;
    MessageViewerLazyPopUpButton *newMailboxButton;
    NSButton *activityToggleButton;
    MessageViewerLazyPopUpButton *actionButton;
    VerticalSplitViewHandle *verticalSplitViewHandle;
    MailboxPaneBottomView *mailboxPaneBottomView;
    BOOL _shouldPreventTableViewResize;
    BOOL _shouldMakeTableViewSelectionVisible;
    BOOL _shouldMakeMessageSelectionVisible;
    BOOL _showingDefaultSearchString;
    BOOL _updatingSearchField;
    BOOL _allowShowingDeletedMessages;
    BOOL _suppressWindowTitleUpdates;
    BOOL _didSetupUI;
    BOOL _isObservingFirstResponder;
    double _restoreMailboxPaneToWidthAfterDragOperation;
    double _lastSplitViewPosition;
    double _lastMailboxSplitPosition;
    double _lastDragXPosition;
    NSArray *_mailboxesToDisplayWhenVisible;
    NSString *_stringToSearchWhenVisible;
    BOOL _shouldCascadeWhenShowing;
    MailToolbar *_toolbar;
    NSMutableDictionary *_toolbarItems;
    MessageViewerSearchField *_searchField;
    NSDictionary *_savedDefaults;
    NSMutableArray *_noteDocumentEditorsForPlainTextTransfer;
    NSArray *_messagesToDeleteAfterPlainTextTransferHasCompleted;
    BOOL _pendingPlainTextTransfers;
    unsigned long long _numberOfPendingPlainTextTransfers;
    unsigned long long _viewerNumber;
    NSMutableArray *_transferOperations;
    NSDictionary *_plainTextTransferParameters;
    double _splitViewPositionBeforeSearch;
    SplitterAnimation *_animation;
    SearchSliceView *_searchSliceView;
    SafeBoolCache *_atLeastOneSelectedMessageIsInOutboxCache;
    SafeBoolCache *_atLeastOneSelectedMessageIsInDraftsCache;
    SafeBoolCache *_canCreateToDoCache;
    NSNumber *_uniqueID;
}

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allMessageViewers;
+ (id)allSingleMessageViewers;
+ (id)existingViewerForStore:(id)arg1;
+ (id)existingViewerForMailboxUid:(id)arg1;
+ (id)_mailboxUidForTag:(unsigned long long)arg1;
+ (id)newViewerForMailboxWithTag:(unsigned long long)arg1;
+ (id)existingViewerShowingMessage:(id)arg1;
+ (void)registerNewViewer:(id)arg1;
+ (void)deregisterViewer:(id)arg1;
+ (void)showAllViewers;
+ (id)mailboxUidsBeingViewed;
+ (id)frontmostMessageViewer;
+ (void)searchForString:(id)arg1;
+ (unsigned long long)firstAvailableViewerNumber;
+ (id)_mailboxUidsForPaths:(id)arg1;
+ (unsigned long long)deleteOperationForEvent:(id)arg1 isKeyPressed:(BOOL)arg2;
+ (void)saveAllViewersToDefaultsWithDelay;
+ (void)saveAllViewersToDefaultsWithNotification:(id)arg1;
+ (void)saveAllViewersToDefaults;
+ (void)saveAllViewersToDefaultsOmittingViewer:(id)arg1;
+ (BOOL)restoreAllViewersFromDefaults;
+ (void)willRestoreAllViewersFromDefaults;
+ (void)didRestoreAllViewersFromDefaults;
+ (BOOL)isRestoringViewersFromDefaults;
+ (id)messageViewersByUniqueID;
- (unsigned long long)viewerNumber;
- (void)revealMessage:(id)arg1;
- (void)revealCurrentMessage;
- (void)_displayFollowup:(id)arg1;
- (void)_cantFindFollowupToMessage:(id)arg1;
- (void)showFollowupsToMessage:(id)arg1;
- (id)_mailboxUidsFromDefaults:(id)arg1;
- (id)initWithSavedDefaults:(id)arg1;
- (void)intializeLazyPopUpButtons;
- (id)init;
- (id)plainInit;
- (id)initWithMailboxUids:(id)arg1;
- (void)dealloc;
- (void)release;
- (void)_registerForApplicationNotifications;
- (void)_unregisterForApplicationNotifications;
- (void)_registerForStoreNotifications;
- (void)_unregisterForStoreNotifications;
- (void)storeBeingInvalidated:(id)arg1;
- (id)_store;
- (void)_setStore:(id)arg1;
- (BOOL)_selectedMailboxesAreOutgoing:(char *)arg1;
- (BOOL)_isViewingMailboxUid:(id)arg1;
- (BOOL)_isShowingMessage:(id)arg1;
- (id)window;
- (void)show;
- (void)showAndMakeKey:(BOOL)arg1;
- (void)_setupUIAndOrderFront:(BOOL)arg1 andMakeKey:(BOOL)arg2;
- (id)tableHeaderViewGetDefaultMenu:(id)arg1;
- (id)_toDoController;
- (void)_setUpWindowContents;
- (void)_setupMailboxOutlineView;
- (void)_setupNextKeyViewLoop;
- (void)_setUpMenus;
- (void)takeOverAsSelectionOwner;
- (void)resignAsSelectionOwner;
- (void)windowDidBecomeMain:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillMiniaturize:(id)arg1;
- (void)openMailboxesPaneToWidth:(double)arg1 byAnimating:(BOOL)arg2;
- (double)mailboxesPaneWidth;
- (BOOL)mailboxesPaneIsOpen;
- (BOOL)mailboxesPaneIsOpenWideEnoughToUse;
- (void)_enableSplitViewAutosaving;
- (void)_disableSplitViewAutosaving;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitViewWillResizeSubviews:(id)arg1;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (void)toggleMailboxesPane:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)maxMailboxesViewWidthAllowed;
- (double)idealMailboxesViewWidth;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)updateMailboxButtonVisibility;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (id)selectedMailboxes;
- (id)selectedMailbox:(BOOL)arg1;
- (id)selectedMailbox;
- (BOOL)isSelectedMailboxSpecial;
- (void)selectPathsToMailboxes:(id)arg1;
- (BOOL)mailboxIsExpanded:(id)arg1;
- (BOOL)sectionIsExpanded:(id)arg1;
- (id)expandedItems;
- (id)sortedSectionItemsForTimeMachine;
- (void)revealMailbox:(id)arg1;
- (id)mailboxSelectionWindow;
- (void)setSelectedMailboxes:(id)arg1;
- (id)selectedMessages;
- (void)setSelectedMessages:(id)arg1;
- (id)currentDisplayedMessage;
- (void)outlineViewDoubleClick:(id)arg1;
- (void)selectMailbox:(id)arg1;
- (void)_openBrowserForMessages:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)_mailboxWasRenamed:(id)arg1;
- (void)mailboxSelectionChanged:(id)arg1;
- (void)_mallDidOpen;
- (void)_mallStructureDidChange;
- (void)_accountsDidChange:(id)arg1;
- (void)_mailboxesDidChange:(id)arg1;
- (void)_selectNextMessage:(id)arg1;
- (void)smartMailboxCriteriaChanged:(id)arg1;
- (void)_setMailboxUids:(id)arg1;
- (BOOL)_selectionContainsMessagesWithDeletedStatusEqualTo:(BOOL)arg1;
- (BOOL)_selectionContainsMessagesWithReadStatusEqualTo:(BOOL)arg1;
- (BOOL)_selectionContainsMessagesWithFlaggedStatusEqualTo:(BOOL)arg1;
- (BOOL)_selectionContainsMessagesWithJunkMailLevelEqualTo:(int)arg1;
- (BOOL)_selectionContainsMessagesWithAttachments;
- (BOOL)atLeastOneSelectedMessageIsInOutbox:(id)arg1;
- (BOOL)_updatedAtLeastOneSelectedMessageIsInOutbox:(id)arg1;
- (BOOL)atLeastOneSelectedMessageIsInDrafts:(id)arg1;
- (BOOL)_updatedAtLeastOneSelectedMessageIsInDrafts:(id)arg1;
- (BOOL)shouldDeleteMessagesGivenCurrentState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)canCreateToDo;
- (BOOL)_updatedCanCreateToDo:(id)arg1;
- (BOOL)validateUserInterfaceItemForToDoList:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_removeAccessibilityLinks;
- (void)messageWasDisplayedInTextView:(id)arg1;
- (void)messageNoLongerDisplayedInTextView:(id)arg1;
- (void)messageThreadSummaryWasDisplayedInTextView:(id)arg1;
- (void)checkNewMail:(id)arg1;
- (void)replyMessage:(id)arg1;
- (void)replyAllMessage:(id)arg1;
- (void)replyToSender:(id)arg1;
- (void)replyToOriginalSender:(id)arg1;
- (void)showComposeWindow:(id)arg1;
- (BOOL)_showEditorForNote:(id)arg1;
- (void)showNoteEditor:(id)arg1;
- (void)showAddressPanel:(id)arg1;
- (void)undeleteMessages:(id)arg1;
- (void)deleteMessages:(id)arg1;
- (void)deleteMessagesAllowingMoveToTrash:(BOOL)arg1;
- (void)openMessages:(id)arg1;
- (void)_openMessages:(id)arg1 withModifiers:(unsigned long long)arg2;
- (void)selectAllMessages;
- (void)focusMessages;
- (void)focusMailboxes;
- (void)focusMessage;
- (void)replyViaIM:(id)arg1;
- (void)showAccountInfo:(id)arg1;
- (id)tableManager;
- (id)mailboxesOutlineViewController;
- (id)contentController;
- (void)jumpToSelection:(id)arg1;
- (id)editorWithType:(int)arg1;
- (void)redirectMessage:(id)arg1;
- (void)forwardMessage:(id)arg1;
- (void)forwardAsAttachment:(id)arg1;
- (void)showToDoReferencedMessageInNewWindow:(id)arg1;
- (void)showToDoInList:(id)arg1;
- (id)currentSingleSelectedToDoMailbox;
- (id)displaySelectedMessageInSeparateWindow:(id)arg1;
- (id)_displaySelectedMessageInSeparateWindow:(id)arg1 withModifiers:(unsigned long long)arg2;
- (void)_openMessageInWebBrowser:(id)arg1;
- (void)renameMailbox:(id)arg1;
- (void)moveMessagesToMailbox:(id)arg1;
- (void)copyMessagesToMailbox:(id)arg1;
- (id)_selectedMessagesWhoseFlag:(unsigned int)arg1 isEqualToState:(BOOL)arg2;
- (void)_changeFlag:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3 undoActionName:(id)arg4;
- (void)markAsRead:(id)arg1;
- (void)markAsUnread:(id)arg1;
- (void)markAsReadFromToolbar:(id)arg1;
- (void)markAsUnreadFromToolbar:(id)arg1;
- (void)markAsUnflagged:(id)arg1;
- (void)markAsFlagged:(id)arg1;
- (void)markAsFlaggedFromToolbar:(id)arg1;
- (void)markAsUnflaggedFromToolbar:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)rebuildTableOfContents:(id)arg1;
- (void)_putMessageDataOntoPasteboard:(id)arg1 attributedString:(id)arg2 shouldDelete:(id)arg3 pasteboardType:(id)arg4;
- (void)_copyMessagesToPasteboard:(id)arg1 deleteWhenCopied:(BOOL)arg2 pasteboardType:(id)arg3 alternateType:(id)arg4;
- (void)_progressAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_showActivityProgressPanelForCopy:(id)arg1;
- (BOOL)_doCopy:(id)arg1 deleteWhenCopied:(BOOL)arg2;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (int)pasteMessages:(id)arg1 todosByMessage:(id)arg2 unsuccessfulMessages:(id)arg3 flagsToSet:(id)arg4 destinationAccount:(id)arg5 destinationStore:(id)arg6;
- (void)addToDosFromDictionary:(id)arg1 forMessages:(id)arg2 newDocumentIDsByOld:(id)arg3 destinationAccount:(id)arg4;
- (void)_pasteData:(id)arg1 pasteboardType:(id)arg2 alternateData:(id)arg3 alternateType:(id)arg4 destination:(id)arg5;
- (void)paste:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (void)stopSpeaking:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (void)showPrintPanel:(id)arg1;
- (BOOL)send:(id)arg1 forDraft:(BOOL)arg2 actualMessage:(id)arg3;
- (BOOL)send:(id)arg1 forDraft:(BOOL)arg2;
- (BOOL)send:(id)arg1;
- (void)batchSendSheetDidEnd:(id)arg1 returnCode:(long long)arg2 context:(void *)arg3;
- (void)saveAs:(id)arg1;
- (void)saveAllAttachments:(id)arg1;
- (void)quickLookSelectedAttachments:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (id)_criterionForMailbox:(id)arg1;
- (id)mailboxSearchCriterionForScope:(int)arg1 containsSentMailbox:(char *)arg2 containsTrashMailbox:(char *)arg3 shouldExcludeJunk:(char *)arg4;
- (void)searchIndex:(id)arg1;
- (BOOL)_isShowingSearchResults;
- (unsigned long long)_searchResultCount;
- (BOOL)_canSaveSearchWithTarget:(int)arg1;
- (BOOL)_canSearchSelectedMailboxes;
- (void)_showSearchSliceView;
- (void)_hideSearchSliceViewByAnimating:(BOOL)arg1;
- (void)_searchForString:(id)arg1;
@property(copy, nonatomic) NSString *searchPhrase;
- (void)_updateSearchStatus;
- (void)_clearSearchByAnimating:(BOOL)arg1;
- (void)clearSearch:(id)arg1;
- (void)setupSearchParametersForTag:(long long)arg1;
- (int)searchField;
- (int)searchTarget;
- (int)searchArea;
- (void)_handleAttachmentsRemovedFromMessages:(id)arg1 newMessages:(id)arg2;
- (void)_removeAttachmentsFromMessages:(id)arg1 fromStores:(id)arg2;
- (void)removeAttachments:(id)arg1;
- (void)scrollBodyToShowToDo:(id)arg1;
- (id)todoTextFromDisplaySelection;
- (BOOL)createToDoWithViewAsKey:(id)arg1;
- (void)_selectAndRevealToDoMailboxForAccount:(id)arg1;
- (id)firstCreateToDoResponder;
- (void)createToDo:(id)arg1;
- (void)sortByTagOfSender:(id)arg1;
- (void)focus:(id)arg1;
- (void)unfocus:(id)arg1;
- (void)openAllThreads:(id)arg1;
- (void)closeAllThreads:(id)arg1;
- (void)toggleThreadedMode:(id)arg1;
- (void)selectThread:(id)arg1;
- (void)selectPreviousInThread:(id)arg1;
- (void)selectNextInThread:(id)arg1;
- (void)showDeletions:(id)arg1;
- (void)hideDeletions:(id)arg1;
- (void)showCompletedToDos:(id)arg1;
- (void)hideCompletedToDos:(id)arg1;
- (void)toggleContentsColumn:(id)arg1;
- (void)toggleMessageNumbersColumn:(id)arg1;
- (void)toggleMessageFlagsColumn:(id)arg1;
- (void)toggleFromColumn:(id)arg1;
- (void)togglePresenceColumn:(id)arg1;
- (void)toggleToColumn:(id)arg1;
- (void)toggleDateSentColumn:(id)arg1;
- (void)toggleDateReceivedColumn:(id)arg1;
- (void)toggleLocationColumn:(id)arg1;
- (void)toggleAuthorColumn:(id)arg1;
- (void)toggleSizeColumn:(id)arg1;
- (void)writeDefaultsToArray:(id)arg1;
- (id)dictionaryRepresentation;
- (void)_findSomeDefaultsIfNecessary;
- (void)_setupFromDefaults;
- (id)_viewerDefaultsKeyFormats;
- (void)_teardownDefaults;
- (void)_copyDefaultsFromViewerNumber:(unsigned long long)arg1 toViewerNumber:(unsigned long long)arg2;
- (id)_countStringForType:(BOOL)arg1 isDrafts:(BOOL)arg2 omitUnread:(BOOL)arg3 totalCount:(unsigned long long *)arg4;
- (void)_messageUpdated:(id)arg1;
- (void)_documentsTransferred:(id)arg1;
- (void)_updateWindowTitle;
- (void)_reallyUpdateWindowTitle;
- (void)_updateMallUids:(id)arg1;
- (id)_currentMessageManager;
- (void)_setSplitViewPercentage:(double)arg1 animate:(BOOL)arg2;
- (void)animationDidEnd:(id)arg1;
- (void)messageWasSelected:(id)arg1 fromMessageBrowserController:(id)arg2;
- (void)scrollCurrentlySelectedMessageToTop;
- (void)selectedMessagesDidChange;
- (void)messageWasDoubleClicked:(id)arg1;
- (void)messageBrowserView:(id)arg1 willStartDragWithEvent:(id)arg2;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)messageBrowserViewDidEndDragging:(id)arg1;
- (BOOL)transferSelectedMessagesToMailbox:(id)arg1 deleteOriginals:(BOOL)arg2;
- (void)_transferSelectedMessagesToExchangeMailboxAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)noteDocumentEditorHasInitialized:(id)arg1;
- (void)_transferPlainTextCopiesOfMessagesWithParameters:(id)arg1;
- (id)_alertForConvertingToPlainTextNote;
- (id)_alertForConvertingToPlainTextNoteWithTodo;
- (BOOL)deleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3;
- (void)_reallyAnimateProgressInidicator;
- (void)_updateSearchStatusWithDelay;
- (void)threadDidExpand;
- (void)threadDidCollapse;
- (void)clearUndoRedoStacksUnconditionally:(BOOL)arg1;
- (void)searchWillStart;
- (void)searchDidFinish;
- (void)searchDidUpdate;
- (id)selectedMailboxUids;
- (void)performSearch:(id)arg1;
- (void)saveSearch:(id)arg1;
- (void)reapplySortingRules:(id)arg1;
- (void)_returnToSenderSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_deleteMessagesAfterBounce:(id)arg1;
- (void)_bounceMessages:(id)arg1;
- (void)returnToSender:(id)arg1;
- (void)addSenderToAddressBook:(id)arg1;
- (void)markAsJunkMail:(id)arg1;
- (void)markMessagesAsJunkMail:(id)arg1 stores:(id)arg2;
- (void)_deleteJunkedMessages:(id)arg1 inStores:(id)arg2 moveToTrash:(BOOL)arg3;
- (void)synchronouslyMarkAsJunkMail:(id)arg1 inStores:(id)arg2 delete:(BOOL)arg3;
- (void)undoMarkMessagesAsJunkMail:(id)arg1 stores:(id)arg2;
- (void)markAsNotJunkMail:(id)arg1;
- (void)markMessagesAsNotJunkMail:(id)arg1 stores:(id)arg2;
- (void)synchronouslyMarkAsNotJunkMail:(id)arg1 inStores:(id)arg2;
- (BOOL)_transferMessages:(id)arg1 toMailbox:(id)arg2 deleteOriginals:(BOOL)arg3 allowUndo:(BOOL)arg4 isDeleteOperation:(BOOL)arg5;
- (void)_reportError:(id)arg1;
- (void)transfer:(id)arg1 didCompleteWithError:(id)arg2;
- (void)hideMessagesForMessageTransfer:(id)arg1;
- (void)unhideMessagesForMessageTransfer:(id)arg1;
- (void)messageTransferDidTransferMessages:(id)arg1;
- (void)messageTransferDidUndoTransferOfMessages:(id)arg1;
- (id)undoManagerForMessageTransfer:(id)arg1;
- (void)_updateSearchItemLabel;
- (void)createUniqueID;

@end

