//� 2009-2012 The MITRE Corporation. ALL RIGHTS RESERVED.
//Permission to use, copy, modify, and distribute this software for any
//purpose with or without fee is hereby granted, provided that the above
//copyright notice and this permission notice appear in all copies.
//THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
//WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
//MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
//ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
//WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
//ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
//OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

//A separate thread which is used for handling comparisons between incoming measurements
//and the values in the database put there by tiresias, or previous measurements which
//did not have any known good measurement from tiresias

#ifndef THREAD_COMPARING_H
#define THREAD_COMPARING_H 

#include "global_includes.h"
#include "server_client_protocol.h"
#include "server_tiresias_protocol.h"
 
#include <queue>

using namespace std;

DWORD WINAPI ComparisonThread(LPVOID lpParam);
int CompareSelfChecksums(self_check_t * selfCheck);

#endif