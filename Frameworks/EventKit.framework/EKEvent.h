/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EKRecurrenceRule, NSNumber, EKParticipant, NSDate, NSURL, EKEventStore, EKCalendar, NSArray, NSMutableArray, NSTimeZone, NSString;

@interface EKEvent : XXUnknownSuperclass {
@private
	EKEventStore* _store;
	void* _event;
	NSDate* _occurrenceDate;
	NSString* _eventId;
	NSNumber* _calendarId;
	NSDate* _dateStamp;
	NSURL* _url;
	BOOL _allDay;
	BOOL _detached;
	BOOL _unread;
	NSString* _title;
	NSString* _location;
	NSString* _notes;
	NSMutableArray* _alarms;
	NSMutableArray* _attendees;
	EKParticipant* _organizer;
	NSDate* _startDate;
	NSDate* _endDate;
	double _duration;
	EKCalendar* _calendar;
	int _status;
	int _partStatus;
	int _availability;
	NSString* _responseComment;
	NSTimeZone* _timeZone;
	NSDate* _originalStartDate;
	NSArray* _exceptionDates;
	NSArray* _recurrenceRules;
	int _birthdayId;
	unsigned long long _loadFlags;
	unsigned long long _dirtyFlags;
}
@property(readonly, assign, nonatomic) NSDate* _startDate;
@property(readonly, assign, nonatomic) BOOL isDetached;
@property(readonly, assign, nonatomic) int status;
@property(assign, nonatomic) int availability;
@property(retain, nonatomic) EKRecurrenceRule* recurrenceRule;
@property(readonly, assign, nonatomic) EKParticipant* organizer;
@property(readonly, assign, nonatomic) NSArray* attendees;
@property(copy, nonatomic) NSDate* endDate;
@property(copy, nonatomic) NSDate* startDate;
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;
@property(copy, nonatomic) NSArray* alarms;
@property(readonly, assign, nonatomic) NSDate* lastModifiedDate;
@property(copy, nonatomic) NSString* notes;
@property(retain, nonatomic) EKCalendar* calendar;
@property(copy, nonatomic) NSString* location;
@property(copy, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) NSString* eventIdentifier;
+(id)eventWithEventStore:(id)eventStore;
+(void)storeOpened:(id)opened;
+(void)addEvent:(id)event toStore:(id)store;
+(void)removeEvent:(id)event fromStore:(id)store;
+(void)storeClosed:(id)closed;
+(void)daemonRestarted;
-(id)init;
-(id)initWithEventStore:(id)eventStore;
-(id)initWithEventStore:(id)eventStore event:(void*)event occurrenceDate:(id)date;
-(id)initWithEventStore:(id)eventStore event:(void*)event occurrenceDate:(id)date eventIdentifier:(id)identifier;
-(void)_clearCachedData;
-(void)dealloc;
-(id)externalURL;
-(id)rowId;
-(void*)objectRef;
-(id)store;
-(id)occurrenceDate;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)copyState;
-(void)restoreState:(id)state;
-(id)exportToICS;
-(void)setStore:(id)store;
-(void)_reconnectEvent;
-(void)_reconnectCalendar;
-(void)_setStoreInternal:(id)internal;
-(void)_storeClosed;
-(void)_reconnectToServer;
-(BOOL)isEqual:(id)equal;
-(BOOL)isDirty;
-(BOOL)isStatusDirty;
-(BOOL)isDirtyIgnoringCalendar;
-(void)_sendModifiedNote;
-(id)_canMoveToCalendar:(id)calendar;
-(id)URL;
-(void)setURL:(id)url;
-(id)birthdayTitleWithAddressBook:(void*)addressBook;
-(int)compareStartDateWithEvent:(id)event;
-(double)duration;
-(id)timeZone;
-(void)setTimeZone:(id)zone;
-(BOOL)isFloating;
-(id)initialStartDate;
-(id)initialEndDate;
-(XXStruct_fhKmAA)startDateGr;
-(XXStruct_fhKmAA)endDateGr;
-(XXStruct_fhKmAA)startDatePinnedForAllDay;
-(XXStruct_fhKmAA)endDatePinnedForAllDay;
-(BOOL)isInvite;
-(id)_attendees;
-(int)attendeeCount;
-(void)setAttendees:(id)attendees;
-(BOOL)hasAlarm;
-(id)nextAlarmDate;
-(id)_alarms;
-(int)alarmCount;
-(void)addAlarm:(id)alarm;
-(void)removeAlarm:(id)alarm;
-(BOOL)_areAlarmsDirty;
-(BOOL)_areRecurrenceRulesDirty;
-(BOOL)isRecurring;
-(int)recurrenceRuleCountInDB;
-(id)_recurrenceRules;
-(id)allRecurrenceRules;
-(int)recurrenceRuleCount;
-(BOOL)canAddRecurrence;
-(int)participationStatus;
-(void)setParticipationStatus:(int)status;
-(int)birthdayId;
-(BOOL)responseMustApplyToAll;
-(BOOL)isUnread;
-(void)setUnread:(BOOL)unread;
-(void)clearUnreadState;
-(id)responseComment;
-(void)setResponseComment:(id)comment;
-(BOOL)isEditable;
-(id)exceptionDates;
-(id)originalEvent;
-(id)detachedEvents;
-(BOOL)requiresDetach;
-(BOOL)canDetachSingleOccurrence;
-(int)pendingParticipationStatus;
-(id)externalId;
-(id)uniqueId;
-(BOOL)hasActionWithExternalAndFolderID;
-(BOOL)canSetAvailability;
-(BOOL)canAddAttendees;
-(BOOL)hasSelfAttendee;
-(BOOL)canSetAlarms;
-(BOOL)canBeRespondedTo;
-(id)description;
-(void)revert;
-(void)_loadPropertyIfNeeded:(int)needed loader:(id)loader;
-(void)_disassociate;
-(BOOL)refresh;
-(BOOL)commit:(int)commit error:(id*)error;
-(BOOL)remove:(int)remove error:(id*)error;
-(BOOL)_commitRecurrenceRule:(id*)rule;
-(BOOL)_commitAlarms:(id*)alarms;
-(BOOL)_commitAttendees:(id*)attendees;
-(BOOL)_validateDatesAndRecurrencesGivenSpan:(int)span error:(id*)error;
-(BOOL)_validateDurationConstrainedToRecurrenceInterval;
-(BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)recurrenceInterval;
-(BOOL)_occurrenceExistsOnDate:(double)date;
-(BOOL)_checkStartDateConstraintAgainstDate:(XXStruct_fhKmAA)date error:(id*)error;
@end
