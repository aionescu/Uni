package ro.arc.packageManager.core.domain.validators;

import org.springframework.stereotype.Component;
import ro.arc.packageManager.core.domain.Package;

@Component
public class PackageValidator implements Validator<Package> {
    @Override
    public void validate(Package entity) throws ValidatorException {
        Validate.notNull(entity.getName(), "name");
        Validate.validIdentifier(entity.getName(), "name");

        Validate.notNull(entity.getDescription(), "description");
        Validate.notBlank(entity.getDescription(), "description");

        Validate.notNull(entity.getSourceRepo(), "sourceRepo");
        Validate.validURI(entity.getSourceRepo(), "sourceRepo");

        Validate.notNull(entity.getLicense(), "license");
        Validate.notBlank(entity.getLicense(), "license");
    }
}
