// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TEST_TEST_FBS_H_
#define FLATBUFFERS_GENERATED_TEST_TEST_FBS_H_

#include "flatbuffers/flatbuffers.h"

namespace test_fbs {

struct Pair;

struct Account;

enum Language {
  Language_NONE = 0,
  Language_CHS = 1,
  Language_CHT = 2,
  Language_ENG = 3,
  Language_MIN = Language_NONE,
  Language_MAX = Language_ENG
};

inline const Language (&EnumValuesLanguage())[4] {
  static const Language values[] = {
    Language_NONE,
    Language_CHS,
    Language_CHT,
    Language_ENG
  };
  return values;
}

inline const char * const *EnumNamesLanguage() {
  static const char * const names[] = {
    "NONE",
    "CHS",
    "CHT",
    "ENG",
    nullptr
  };
  return names;
}

inline const char *EnumNameLanguage(Language e) {
  if (e < Language_NONE || e > Language_ENG) return "";
  const size_t index = static_cast<int>(e);
  return EnumNamesLanguage()[index];
}

struct Pair FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FIRST = 4,
    VT_SECOND = 6
  };
  const flatbuffers::String *first() const {
    return GetPointer<const flatbuffers::String *>(VT_FIRST);
  }
  const flatbuffers::String *second() const {
    return GetPointer<const flatbuffers::String *>(VT_SECOND);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_FIRST) &&
           verifier.VerifyString(first()) &&
           VerifyOffset(verifier, VT_SECOND) &&
           verifier.VerifyString(second()) &&
           verifier.EndTable();
  }
};

struct PairBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_first(flatbuffers::Offset<flatbuffers::String> first) {
    fbb_.AddOffset(Pair::VT_FIRST, first);
  }
  void add_second(flatbuffers::Offset<flatbuffers::String> second) {
    fbb_.AddOffset(Pair::VT_SECOND, second);
  }
  explicit PairBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  PairBuilder &operator=(const PairBuilder &);
  flatbuffers::Offset<Pair> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Pair>(end);
    return o;
  }
};

inline flatbuffers::Offset<Pair> CreatePair(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> first = 0,
    flatbuffers::Offset<flatbuffers::String> second = 0) {
  PairBuilder builder_(_fbb);
  builder_.add_second(second);
  builder_.add_first(first);
  return builder_.Finish();
}

inline flatbuffers::Offset<Pair> CreatePairDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *first = nullptr,
    const char *second = nullptr) {
  auto first__ = first ? _fbb.CreateString(first) : 0;
  auto second__ = second ? _fbb.CreateString(second) : 0;
  return test_fbs::CreatePair(
      _fbb,
      first__,
      second__);
}

struct Account FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LANG = 4,
    VT_LANGS = 6,
    VT_EXTRA = 8,
    VT_EXTRAS = 10,
    VT_TEST_STR = 12,
    VT_TEST_VCT_STR = 14,
    VT_TEST_INT = 16,
    VT_TEST_VCT_INT = 18,
    VT_TEST_UINT = 20,
    VT_TEST_VCT_UINT = 22,
    VT_TEST_SHORT = 24,
    VT_TEST_VCT_SHORT = 26,
    VT_TEST_LONG = 28,
    VT_TEST_VCT_LONG = 30,
    VT_TEST_ULONG = 32,
    VT_TEST_VCT_ULONG = 34,
    VT_TEST_FLOAT = 36,
    VT_TEST_VCT_FLOAT = 38,
    VT_TEST_BOOL = 40,
    VT_TEST_VCT_BOOL = 42
  };
  Language lang() const {
    return static_cast<Language>(GetField<uint8_t>(VT_LANG, 0));
  }
  const flatbuffers::Vector<uint8_t> *langs() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_LANGS);
  }
  const Pair *extra() const {
    return GetPointer<const Pair *>(VT_EXTRA);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Pair>> *extras() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Pair>> *>(VT_EXTRAS);
  }
  const flatbuffers::String *test_str() const {
    return GetPointer<const flatbuffers::String *>(VT_TEST_STR);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *test_vct_str() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_TEST_VCT_STR);
  }
  int32_t test_int() const {
    return GetField<int32_t>(VT_TEST_INT, 0);
  }
  const flatbuffers::Vector<int32_t> *test_vct_int() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_TEST_VCT_INT);
  }
  uint32_t test_uint() const {
    return GetField<uint32_t>(VT_TEST_UINT, 0);
  }
  const flatbuffers::Vector<uint32_t> *test_vct_uint() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_TEST_VCT_UINT);
  }
  int16_t test_short() const {
    return GetField<int16_t>(VT_TEST_SHORT, 0);
  }
  const flatbuffers::Vector<int16_t> *test_vct_short() const {
    return GetPointer<const flatbuffers::Vector<int16_t> *>(VT_TEST_VCT_SHORT);
  }
  int64_t test_long() const {
    return GetField<int64_t>(VT_TEST_LONG, 0);
  }
  const flatbuffers::Vector<int64_t> *test_vct_long() const {
    return GetPointer<const flatbuffers::Vector<int64_t> *>(VT_TEST_VCT_LONG);
  }
  uint64_t test_ulong() const {
    return GetField<uint64_t>(VT_TEST_ULONG, 0);
  }
  const flatbuffers::Vector<uint64_t> *test_vct_ulong() const {
    return GetPointer<const flatbuffers::Vector<uint64_t> *>(VT_TEST_VCT_ULONG);
  }
  float test_float() const {
    return GetField<float>(VT_TEST_FLOAT, 0.0f);
  }
  const flatbuffers::Vector<float> *test_vct_float() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_TEST_VCT_FLOAT);
  }
  bool test_bool() const {
    return GetField<uint8_t>(VT_TEST_BOOL, 0) != 0;
  }
  const flatbuffers::Vector<uint8_t> *test_vct_bool() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_TEST_VCT_BOOL);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_LANG) &&
           VerifyOffset(verifier, VT_LANGS) &&
           verifier.VerifyVector(langs()) &&
           VerifyOffset(verifier, VT_EXTRA) &&
           verifier.VerifyTable(extra()) &&
           VerifyOffset(verifier, VT_EXTRAS) &&
           verifier.VerifyVector(extras()) &&
           verifier.VerifyVectorOfTables(extras()) &&
           VerifyOffset(verifier, VT_TEST_STR) &&
           verifier.VerifyString(test_str()) &&
           VerifyOffset(verifier, VT_TEST_VCT_STR) &&
           verifier.VerifyVector(test_vct_str()) &&
           verifier.VerifyVectorOfStrings(test_vct_str()) &&
           VerifyField<int32_t>(verifier, VT_TEST_INT) &&
           VerifyOffset(verifier, VT_TEST_VCT_INT) &&
           verifier.VerifyVector(test_vct_int()) &&
           VerifyField<uint32_t>(verifier, VT_TEST_UINT) &&
           VerifyOffset(verifier, VT_TEST_VCT_UINT) &&
           verifier.VerifyVector(test_vct_uint()) &&
           VerifyField<int16_t>(verifier, VT_TEST_SHORT) &&
           VerifyOffset(verifier, VT_TEST_VCT_SHORT) &&
           verifier.VerifyVector(test_vct_short()) &&
           VerifyField<int64_t>(verifier, VT_TEST_LONG) &&
           VerifyOffset(verifier, VT_TEST_VCT_LONG) &&
           verifier.VerifyVector(test_vct_long()) &&
           VerifyField<uint64_t>(verifier, VT_TEST_ULONG) &&
           VerifyOffset(verifier, VT_TEST_VCT_ULONG) &&
           verifier.VerifyVector(test_vct_ulong()) &&
           VerifyField<float>(verifier, VT_TEST_FLOAT) &&
           VerifyOffset(verifier, VT_TEST_VCT_FLOAT) &&
           verifier.VerifyVector(test_vct_float()) &&
           VerifyField<uint8_t>(verifier, VT_TEST_BOOL) &&
           VerifyOffset(verifier, VT_TEST_VCT_BOOL) &&
           verifier.VerifyVector(test_vct_bool()) &&
           verifier.EndTable();
  }
};

struct AccountBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_lang(Language lang) {
    fbb_.AddElement<uint8_t>(Account::VT_LANG, static_cast<uint8_t>(lang), 0);
  }
  void add_langs(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> langs) {
    fbb_.AddOffset(Account::VT_LANGS, langs);
  }
  void add_extra(flatbuffers::Offset<Pair> extra) {
    fbb_.AddOffset(Account::VT_EXTRA, extra);
  }
  void add_extras(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Pair>>> extras) {
    fbb_.AddOffset(Account::VT_EXTRAS, extras);
  }
  void add_test_str(flatbuffers::Offset<flatbuffers::String> test_str) {
    fbb_.AddOffset(Account::VT_TEST_STR, test_str);
  }
  void add_test_vct_str(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> test_vct_str) {
    fbb_.AddOffset(Account::VT_TEST_VCT_STR, test_vct_str);
  }
  void add_test_int(int32_t test_int) {
    fbb_.AddElement<int32_t>(Account::VT_TEST_INT, test_int, 0);
  }
  void add_test_vct_int(flatbuffers::Offset<flatbuffers::Vector<int32_t>> test_vct_int) {
    fbb_.AddOffset(Account::VT_TEST_VCT_INT, test_vct_int);
  }
  void add_test_uint(uint32_t test_uint) {
    fbb_.AddElement<uint32_t>(Account::VT_TEST_UINT, test_uint, 0);
  }
  void add_test_vct_uint(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> test_vct_uint) {
    fbb_.AddOffset(Account::VT_TEST_VCT_UINT, test_vct_uint);
  }
  void add_test_short(int16_t test_short) {
    fbb_.AddElement<int16_t>(Account::VT_TEST_SHORT, test_short, 0);
  }
  void add_test_vct_short(flatbuffers::Offset<flatbuffers::Vector<int16_t>> test_vct_short) {
    fbb_.AddOffset(Account::VT_TEST_VCT_SHORT, test_vct_short);
  }
  void add_test_long(int64_t test_long) {
    fbb_.AddElement<int64_t>(Account::VT_TEST_LONG, test_long, 0);
  }
  void add_test_vct_long(flatbuffers::Offset<flatbuffers::Vector<int64_t>> test_vct_long) {
    fbb_.AddOffset(Account::VT_TEST_VCT_LONG, test_vct_long);
  }
  void add_test_ulong(uint64_t test_ulong) {
    fbb_.AddElement<uint64_t>(Account::VT_TEST_ULONG, test_ulong, 0);
  }
  void add_test_vct_ulong(flatbuffers::Offset<flatbuffers::Vector<uint64_t>> test_vct_ulong) {
    fbb_.AddOffset(Account::VT_TEST_VCT_ULONG, test_vct_ulong);
  }
  void add_test_float(float test_float) {
    fbb_.AddElement<float>(Account::VT_TEST_FLOAT, test_float, 0.0f);
  }
  void add_test_vct_float(flatbuffers::Offset<flatbuffers::Vector<float>> test_vct_float) {
    fbb_.AddOffset(Account::VT_TEST_VCT_FLOAT, test_vct_float);
  }
  void add_test_bool(bool test_bool) {
    fbb_.AddElement<uint8_t>(Account::VT_TEST_BOOL, static_cast<uint8_t>(test_bool), 0);
  }
  void add_test_vct_bool(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> test_vct_bool) {
    fbb_.AddOffset(Account::VT_TEST_VCT_BOOL, test_vct_bool);
  }
  explicit AccountBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AccountBuilder &operator=(const AccountBuilder &);
  flatbuffers::Offset<Account> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Account>(end);
    return o;
  }
};

inline flatbuffers::Offset<Account> CreateAccount(
    flatbuffers::FlatBufferBuilder &_fbb,
    Language lang = Language_NONE,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> langs = 0,
    flatbuffers::Offset<Pair> extra = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Pair>>> extras = 0,
    flatbuffers::Offset<flatbuffers::String> test_str = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> test_vct_str = 0,
    int32_t test_int = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> test_vct_int = 0,
    uint32_t test_uint = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> test_vct_uint = 0,
    int16_t test_short = 0,
    flatbuffers::Offset<flatbuffers::Vector<int16_t>> test_vct_short = 0,
    int64_t test_long = 0,
    flatbuffers::Offset<flatbuffers::Vector<int64_t>> test_vct_long = 0,
    uint64_t test_ulong = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint64_t>> test_vct_ulong = 0,
    float test_float = 0.0f,
    flatbuffers::Offset<flatbuffers::Vector<float>> test_vct_float = 0,
    bool test_bool = false,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> test_vct_bool = 0) {
  AccountBuilder builder_(_fbb);
  builder_.add_test_ulong(test_ulong);
  builder_.add_test_long(test_long);
  builder_.add_test_vct_bool(test_vct_bool);
  builder_.add_test_vct_float(test_vct_float);
  builder_.add_test_float(test_float);
  builder_.add_test_vct_ulong(test_vct_ulong);
  builder_.add_test_vct_long(test_vct_long);
  builder_.add_test_vct_short(test_vct_short);
  builder_.add_test_vct_uint(test_vct_uint);
  builder_.add_test_uint(test_uint);
  builder_.add_test_vct_int(test_vct_int);
  builder_.add_test_int(test_int);
  builder_.add_test_vct_str(test_vct_str);
  builder_.add_test_str(test_str);
  builder_.add_extras(extras);
  builder_.add_extra(extra);
  builder_.add_langs(langs);
  builder_.add_test_short(test_short);
  builder_.add_test_bool(test_bool);
  builder_.add_lang(lang);
  return builder_.Finish();
}

inline flatbuffers::Offset<Account> CreateAccountDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    Language lang = Language_NONE,
    const std::vector<uint8_t> *langs = nullptr,
    flatbuffers::Offset<Pair> extra = 0,
    const std::vector<flatbuffers::Offset<Pair>> *extras = nullptr,
    const char *test_str = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *test_vct_str = nullptr,
    int32_t test_int = 0,
    const std::vector<int32_t> *test_vct_int = nullptr,
    uint32_t test_uint = 0,
    const std::vector<uint32_t> *test_vct_uint = nullptr,
    int16_t test_short = 0,
    const std::vector<int16_t> *test_vct_short = nullptr,
    int64_t test_long = 0,
    const std::vector<int64_t> *test_vct_long = nullptr,
    uint64_t test_ulong = 0,
    const std::vector<uint64_t> *test_vct_ulong = nullptr,
    float test_float = 0.0f,
    const std::vector<float> *test_vct_float = nullptr,
    bool test_bool = false,
    const std::vector<uint8_t> *test_vct_bool = nullptr) {
  auto langs__ = langs ? _fbb.CreateVector<uint8_t>(*langs) : 0;
  auto extras__ = extras ? _fbb.CreateVector<flatbuffers::Offset<Pair>>(*extras) : 0;
  auto test_str__ = test_str ? _fbb.CreateString(test_str) : 0;
  auto test_vct_str__ = test_vct_str ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*test_vct_str) : 0;
  auto test_vct_int__ = test_vct_int ? _fbb.CreateVector<int32_t>(*test_vct_int) : 0;
  auto test_vct_uint__ = test_vct_uint ? _fbb.CreateVector<uint32_t>(*test_vct_uint) : 0;
  auto test_vct_short__ = test_vct_short ? _fbb.CreateVector<int16_t>(*test_vct_short) : 0;
  auto test_vct_long__ = test_vct_long ? _fbb.CreateVector<int64_t>(*test_vct_long) : 0;
  auto test_vct_ulong__ = test_vct_ulong ? _fbb.CreateVector<uint64_t>(*test_vct_ulong) : 0;
  auto test_vct_float__ = test_vct_float ? _fbb.CreateVector<float>(*test_vct_float) : 0;
  auto test_vct_bool__ = test_vct_bool ? _fbb.CreateVector<uint8_t>(*test_vct_bool) : 0;
  return test_fbs::CreateAccount(
      _fbb,
      lang,
      langs__,
      extra,
      extras__,
      test_str__,
      test_vct_str__,
      test_int,
      test_vct_int__,
      test_uint,
      test_vct_uint__,
      test_short,
      test_vct_short__,
      test_long,
      test_vct_long__,
      test_ulong,
      test_vct_ulong__,
      test_float,
      test_vct_float__,
      test_bool,
      test_vct_bool__);
}

inline const test_fbs::Account *GetAccount(const void *buf) {
  return flatbuffers::GetRoot<test_fbs::Account>(buf);
}

inline const test_fbs::Account *GetSizePrefixedAccount(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<test_fbs::Account>(buf);
}

inline bool VerifyAccountBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<test_fbs::Account>(nullptr);
}

inline bool VerifySizePrefixedAccountBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<test_fbs::Account>(nullptr);
}

inline void FinishAccountBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<test_fbs::Account> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedAccountBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<test_fbs::Account> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace test_fbs

#endif  // FLATBUFFERS_GENERATED_TEST_TEST_FBS_H_
