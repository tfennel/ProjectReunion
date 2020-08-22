// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "Microsoft.ApplicationModel.DynamicDependency.PackageDependency.g.h"

namespace winrt::Microsoft::ApplicationModel::DynamicDependency::implementation
{
    struct PackageDependency : PackageDependencyT<PackageDependency>
    {
        PackageDependency() = default;

        static Microsoft::ApplicationModel::DynamicDependency::PackageDependency GetFromId(hstring const& id);
        static Microsoft::ApplicationModel::DynamicDependency::PackageDependency Create(hstring const& packageFamilyName, Windows::ApplicationModel::PackageVersion const& minVersion);
        static Microsoft::ApplicationModel::DynamicDependency::PackageDependency Create(hstring const& packageFamilyName, Windows::ApplicationModel::PackageVersion const& minVersion, Microsoft::ApplicationModel::DynamicDependency::CreatePackageDependencyOptions const& options);
        static Microsoft::ApplicationModel::DynamicDependency::PackageDependency CreateForUser(Windows::System::User const& user, hstring const& packageFamilyName, Windows::ApplicationModel::PackageVersion const& minVersion, Microsoft::ApplicationModel::DynamicDependency::CreatePackageDependencyOptions const& options);
        static Microsoft::ApplicationModel::DynamicDependency::PackageDependency CreateForSystem(hstring const& packageFamilyName, Windows::ApplicationModel::PackageVersion const& minVersion, Microsoft::ApplicationModel::DynamicDependency::CreatePackageDependencyOptions const& options);
        hstring Id();
        void Delete();
        Microsoft::ApplicationModel::DynamicDependency::PackageDependencyContext Add();
        Microsoft::ApplicationModel::DynamicDependency::PackageDependencyContext Add(Microsoft::ApplicationModel::DynamicDependency::AddPackageDependencyOptions const& options);
    };
}
namespace winrt::Microsoft::ApplicationModel::DynamicDependency::factory_implementation
{
    struct PackageDependency : PackageDependencyT<PackageDependency, implementation::PackageDependency>
    {
    };
}
