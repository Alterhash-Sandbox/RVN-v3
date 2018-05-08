// Copyright (c) 2017 The Raven Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef RAVEN_ASSETDB_H
#define RAVEN_ASSETDB_H

#include "fs.h"
#include "serialize.h"

#include <string>
#include <map>
#include <dbwrapper.h>

class CNewAsset;
class uint256;
class COutPoint;

/** Access to the block database (blocks/index/) */
class CAssetsDB : public CDBWrapper
{
public:
    explicit CAssetsDB(size_t nCacheSize, bool fMemory = false, bool fWipe = false);

    CAssetsDB(const CAssetsDB&) = delete;
    CAssetsDB& operator=(const CAssetsDB&) = delete;

    // Write to database functions
    bool WriteAssetData(const CNewAsset& asset);
    bool WriteMyAssetsData(const std::string &strName, const std::set<COutPoint>& setOuts);
    bool WriteAssetAddressQuantity(const std::string& assetName, const std::string& address, const CAmount& quantity);

    // Read from database functions
    bool ReadAssetData(const std::string& strName, CNewAsset& asset);
    bool ReadMyAssetsData(const std::string &strName, std::set<COutPoint>& setOuts);
    bool ReadAssetAddressQuantity(const std::string& assetName, const std::string& address, CAmount& quantity);

    // Erase from database functions
    bool EraseAssetData(const CNewAsset& asset);
    bool EraseMyAssetData(const CNewAsset& asset);
    bool EraseAssetAddressQuantity(const std::string &assetName, const std::string &address);

    // Helper functions
    bool EraseMyOutPoints(const CNewAsset& asset);
    bool LoadAssets();

};


#endif //RAVEN_ASSETDB_H
