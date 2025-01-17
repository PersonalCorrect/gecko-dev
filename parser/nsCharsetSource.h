/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef nsCharsetSource_h_
#define nsCharsetSource_h_

// note: the value order defines the priority; higher numbers take priority
enum {
  kCharsetUninitialized,
  kCharsetFromFallback,
  kCharsetFromTopLevelDomain,
  kCharsetFromDocTypeDefault,  // This and up confident for XHR
  kCharsetFromInitialAutoDetectionWouldHaveBeenUTF8,
  kCharsetFromInitialAutoDetectionWouldNotHaveBeenUTF8,
  kCharsetFromFinalJapaneseAutoDetection,
  kCharsetFromFinalAutoDetectionWouldHaveBeenUTF8,
  kCharsetFromFinalAutoDetectionWouldNotHaveBeenUTF8,
  kCharsetFromFinalAutoDetectionFile,
  kCharsetFromParentFrame,  // Same-origin parent takes precedence over detector
                            // to avoid breaking tests. (Also, the HTML spec
                            // says so.)
  kCharsetFromMetaPrescan,  // this one and smaller: HTML5 Tentative
  kCharsetFromMetaTag,      // this one and greater: HTML5 Confident
  kCharsetFromIrreversibleAutoDetection,
  kCharsetFromChannel,
  kCharsetFromOtherComponent,
  kCharsetFromPendingUserForcedAutoDetection,  // Marker value to be upgraded
                                               // later
  kCharsetFromInitialUserForcedAutoDetection,
  kCharsetFromFinalUserForcedAutoDetection,
  kCharsetFromUserForced,  // propagates to child frames
  kCharsetFromUserForcedJapaneseAutoDetection,
  kCharsetFromByteOrderMark,
  kCharsetFromUtf8OnlyMime,  // For JSON, WebVTT and such
  kCharsetFromBuiltIn,       // resource: URLs
};

#endif /* nsCharsetSource_h_ */
