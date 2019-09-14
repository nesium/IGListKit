// swift-tools-version:5.1
import PackageDescription

let package = Package(
    name: "IGListKit",
    products: [
        .library(name: "IGListKit", targets: ["IGListKit"])
    ],
    targets: [
        .target(
            name: "IGListKit",
            dependencies: []
        )
    ],
    cLanguageStandard: .gnu11,
    cxxLanguageStandard: .gnucxx14
)
