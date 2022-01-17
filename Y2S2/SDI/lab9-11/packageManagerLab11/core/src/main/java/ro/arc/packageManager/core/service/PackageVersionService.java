package ro.arc.packageManager.core.service;

import ro.arc.packageManager.core.domain.Package;
import ro.arc.packageManager.core.domain.PackageVersion;

import java.util.List;

public interface PackageVersionService {
    PackageVersion addPackageVersion(PackageVersion packageVersion);

    PackageVersion updatePackageVersion(PackageVersion packageVersion);

    void deletePackageVersion(Long ID);

    List<PackageVersion> getFilteredPackageVersions(Package aPackage);

    List<PackageVersion> getAllPackageVersions();
}